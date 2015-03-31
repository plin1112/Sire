###
### CMake file to install intel's threaded building blocks
### in the Sire bundle
###

unset(TBB_LIBRARY CACHE)
unset(TBB_MALLOC_LIBRARY CACHE)
find_library( TBB_LIBRARY "tbb" PATHS "${BUNDLE_STAGEDIR}/lib" NO_DEFAULT_PATH )
find_library( TBB_MALLOC_LIBRARY "tbbmalloc" PATHS "${BUNDLE_STAGEDIR}/lib" NO_DEFAULT_PATH )

if ( TBB_LIBRARY AND TBB_MALLOC_LIBRARY )
  message( STATUS "Have already compiled a bundled version of TBB" )
  set( TBB_INCLUDE_DIR "${BUNDLE_STAGEDIR}/include" )
else() 
  message( STATUS "Compiling and installing a bundled version of Intel's Threaded Building Blocks (TBB)" )

  set( TBB_ZIPFILE "${CMAKE_SOURCE_DIR}/src/bundled/tbb.tar.gz" )

  if (EXISTS "${TBB_ZIPFILE}")
    set( TBB_BUILD_DIR "${BUNDLE_BUILDDIR}/tbb" )

    if (NOT EXISTS "${TBB_BUILD_DIR}")
      message( STATUS "Unzipping ${TBB_ZIPFILE} to ${TBB_BUILD_DIR}" )
      execute_process(
          COMMAND ${CMAKE_COMMAND} -E tar xzf ${TBB_ZIPFILE}
          WORKING_DIRECTORY ${BUNDLE_BUILDDIR}
      )
    endif()

    if ( SIRE_HAS_CPP_LIB )
      set( TBB_OPTIONS "${TBB_OPTIONS};stdlib=libc++" )
    endif()

    if ( ${SIRE_COMPILER} MATCHES "ICPC" )
      if (WINDOWS)
        set( TBB_OPTIONS "${TBB_OPTIONS};compiler=icl" )
      else()
        set( TBB_OPTIONS "${TBB_OPTIONS};compiler=icc" )
      endif()
    elseif ( ${SIRE_COMPILER} MATCHES "GCC" )
      set( TBB_OPTIONS "${TBB_OPTIONS};compiler=gcc" )
    elseif ( ${SIRE_COMPILER} MATCHES "CLANG" )
      set( TBB_OPTIONS "${TBB_OPTIONS};compiler=clang" )
    else()
      message( FATAL_ERROR "Cannot compile TBB as need either the Intel, GCC or CLANG compilers." )
    endif()

    execute_process( COMMAND ${CMAKE_MAKE_PROGRAM} ${TBB_OPTIONS} info
                     WORKING_DIRECTORY ${TBB_BUILD_DIR}
                     OUTPUT_VARIABLE TBB_INFO )

    message(STATUS "EXECUTE INFO_COMMAND GET ${TBB_INFO}")

    string(REGEX MATCH "tbb_build_prefix=(.+)" TBB_BUILD_PREFIX ${TBB_INFO})

    if (NOT TBB_BUILD_PREFIX)
      message( FATAL_ERROR "Cannot find the TBB build prefix, which is available via 'make info'" )
    endif()

    string(STRIP ${CMAKE_MATCH_1} TBB_BUILD_PREFIX)
    set(TBB_INSTALL_DIR "${TBB_BUILD_DIR}/build/${TBB_BUILD_PREFIX}_release")
    message( STATUS "TBB will be built in the directory ${TBB_INSTALL_DIR}" )

    message( STATUS "Patience... Compiling TBB from source...")
    execute_process( COMMAND ${CMAKE_MAKE_PROGRAM} -j ${NCORES} ${TBB_OPTIONS} tbb
                     WORKING_DIRECTORY ${TBB_BUILD_DIR}
                   )
    message( STATUS "...complete" )

    message( STATUS "Patience... Compiling TBB malloc from source...")
    execute_process( COMMAND ${CMAKE_MAKE_PROGRAM} -j ${NCORES} ${TBB_OPTIONS} tbbmalloc
                     WORKING_DIRECTORY ${TBB_BUILD_DIR}
                    )
    message( STATUS "...complete" )

    unset(TBB_LIBRARY CACHE)
    unset(TBB_MALLOC_LIBRARY CACHE)
    find_library( TBB_LIBRARY "tbb" PATHS ${TBB_INSTALL_DIR} NO_DEFAULT_PATH )
    find_library( TBB_MALLOC_LIBRARY "tbbmalloc" PATHS ${TBB_INSTALL_DIR} NO_DEFAULT_PATH )

    if ( TBB_MALLOC_LIBRARY )
      if (EXISTS "${TBB_MALLOC_LIBRARY}.2" )
        # On Linux, the library is libtbb_malloc.so.2, not libtbb_malloc.so
        set( TBB_MALLOC_LIBRARY "${TBB_MALLOC_LIBRARY}.2" )
      endif()
    endif()

    if ( TBB_LIBRARY )
      if (EXISTS "${TBB_LIBRARY}.2")
        # On Linux, the library is libtbb.so.2, not libtbb.so
        set( TBB_LIBRARY "${TBB_LIBRARY}.2" )
      endif()

      execute_process( COMMAND ${CMAKE_COMMAND} -E copy ${TBB_LIBRARY} ${BUNDLE_STAGEDIR}/lib )
      execute_process( COMMAND ${CMAKE_COMMAND} -E copy ${TBB_MALLOC_LIBRARY} ${BUNDLE_STAGEDIR}/lib )

      execute_process( COMMAND ${CMAKE_COMMAND} -E copy_directory ${TBB_BUILD_DIR}/include ${BUNDLE_STAGEDIR}/include )

      get_filename_component(TBB_NAME ${TBB_LIBRARY} NAME)
      get_filename_component(TBB_MALLOC_NAME ${TBB_MALLOC_LIBRARY} NAME)

      set( TBB_LIBRARY "${BUNDLE_STAGEDIR}/lib/${TBB_NAME}" )
      set( TBB_MALLOC_LIBRARY "${BUNDLE_STAGEDIR}/lib/${TBB_MALLOC_NAME}" )

      set( TBB_INCLUDE_DIR "${BUNDLE_STAGEDIR}/include" )

      # need to set the install name so that we can find the library when it is
      # placed into the bundle directory
      if (APPLE)
        execute_process( COMMAND ${CMAKE_INSTALL_NAME_TOOL} -id "@rpath/libtbb.dylib" ${TBB_LIBRARY} )
        execute_process( COMMAND ${CMAKE_INSTALL_NAME_TOOL} -id "@rpath/libtbbmalloc.dylib" ${TBB_MALLOC_LIBRARY} )
      endif()
    else()
      message( STATUS "WARNING: TBB library was not built in the expected directory.")
    endif()
  endif()
endif()

if ( TBB_LIBRARY AND TBB_MALLOC_LIBRARY )
  message( STATUS "Using TBB from ${TBB_INCLUDE_DIR}" )
  message( STATUS "Libraries ${TBB_LIBRARY} | ${TBB_MALLOC_LIBRARY}" )
  set( SIRE_FOUND_TBB TRUE )
else()
  message( STATUS "Strange? Cannot find the compiled TBB library. We cannot compile it, so will need to rely on the system version..." )
endif()
