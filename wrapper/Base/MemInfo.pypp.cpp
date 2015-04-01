// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MemInfo.pypp.hpp"

namespace bp = boost::python;

#include "meminfo.h"

#include "sire_config.h"

#include <QDebug>

#include <QFile>

#include <QMutex>

#include <QTextStream>

#include <QThread>

#include <stdio.h>

#include "meminfo.h"

SireBase::MemInfo __copy__(const SireBase::MemInfo &other){ return SireBase::MemInfo(other); }

#include "Helpers/str.hpp"

void register_MemInfo_class(){

    { //::SireBase::MemInfo
        typedef bp::class_< SireBase::MemInfo > MemInfo_exposer_t;
        MemInfo_exposer_t MemInfo_exposer = MemInfo_exposer_t( "MemInfo", bp::init< >() );
        bp::scope MemInfo_scope( MemInfo_exposer );
        MemInfo_exposer.def( bp::init< SireBase::MemInfo const & >(( bp::arg("other") )) );
        { //::SireBase::MemInfo::allocatedBytes
        
            typedef ::quint64 ( ::SireBase::MemInfo::*allocatedBytes_function_type )(  ) const;
            allocatedBytes_function_type allocatedBytes_function_value( &::SireBase::MemInfo::allocatedBytes );
            
            MemInfo_exposer.def( 
                "allocatedBytes"
                , allocatedBytes_function_value );
        
        }
        { //::SireBase::MemInfo::mMappedBytes
        
            typedef ::quint64 ( ::SireBase::MemInfo::*mMappedBytes_function_type )(  ) const;
            mMappedBytes_function_type mMappedBytes_function_value( &::SireBase::MemInfo::mMappedBytes );
            
            MemInfo_exposer.def( 
                "mMappedBytes"
                , mMappedBytes_function_value );
        
        }
        { //::SireBase::MemInfo::operator=
        
            typedef ::SireBase::MemInfo & ( ::SireBase::MemInfo::*assign_function_type )( ::SireBase::MemInfo const & ) ;
            assign_function_type assign_function_value( &::SireBase::MemInfo::operator= );
            
            MemInfo_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireBase::MemInfo::startMonitoring
        
            typedef void ( *startMonitoring_function_type )( int );
            startMonitoring_function_type startMonitoring_function_value( &::SireBase::MemInfo::startMonitoring );
            
            MemInfo_exposer.def( 
                "startMonitoring"
                , startMonitoring_function_value
                , ( bp::arg("ms")=(int)(1000) ) );
        
        }
        { //::SireBase::MemInfo::startMonitoring
        
            typedef void ( *startMonitoring_function_type )( ::QString const &,int );
            startMonitoring_function_type startMonitoring_function_value( &::SireBase::MemInfo::startMonitoring );
            
            MemInfo_exposer.def( 
                "startMonitoring"
                , startMonitoring_function_value
                , ( bp::arg("filename"), bp::arg("ms")=(int)(1000) ) );
        
        }
        { //::SireBase::MemInfo::stopMonitoring
        
            typedef void ( *stopMonitoring_function_type )(  );
            stopMonitoring_function_type stopMonitoring_function_value( &::SireBase::MemInfo::stopMonitoring );
            
            MemInfo_exposer.def( 
                "stopMonitoring"
                , stopMonitoring_function_value );
        
        }
        { //::SireBase::MemInfo::takeMeasurement
        
            typedef ::SireBase::MemInfo ( *takeMeasurement_function_type )(  );
            takeMeasurement_function_type takeMeasurement_function_value( &::SireBase::MemInfo::takeMeasurement );
            
            MemInfo_exposer.def( 
                "takeMeasurement"
                , takeMeasurement_function_value );
        
        }
        { //::SireBase::MemInfo::toString
        
            typedef ::QString ( ::SireBase::MemInfo::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireBase::MemInfo::toString );
            
            MemInfo_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireBase::MemInfo::totalSystemMemory
        
            typedef ::quint64 ( ::SireBase::MemInfo::*totalSystemMemory_function_type )(  ) const;
            totalSystemMemory_function_type totalSystemMemory_function_value( &::SireBase::MemInfo::totalSystemMemory );
            
            MemInfo_exposer.def( 
                "totalSystemMemory"
                , totalSystemMemory_function_value );
        
        }
        { //::SireBase::MemInfo::totalVirtualMemory
        
            typedef ::quint64 ( ::SireBase::MemInfo::*totalVirtualMemory_function_type )(  ) const;
            totalVirtualMemory_function_type totalVirtualMemory_function_value( &::SireBase::MemInfo::totalVirtualMemory );
            
            MemInfo_exposer.def( 
                "totalVirtualMemory"
                , totalVirtualMemory_function_value );
        
        }
        { //::SireBase::MemInfo::usedBytes
        
            typedef ::quint64 ( ::SireBase::MemInfo::*usedBytes_function_type )(  ) const;
            usedBytes_function_type usedBytes_function_value( &::SireBase::MemInfo::usedBytes );
            
            MemInfo_exposer.def( 
                "usedBytes"
                , usedBytes_function_value );
        
        }
        { //::SireBase::MemInfo::usedSystemMemory
        
            typedef ::quint64 ( ::SireBase::MemInfo::*usedSystemMemory_function_type )(  ) const;
            usedSystemMemory_function_type usedSystemMemory_function_value( &::SireBase::MemInfo::usedSystemMemory );
            
            MemInfo_exposer.def( 
                "usedSystemMemory"
                , usedSystemMemory_function_value );
        
        }
        { //::SireBase::MemInfo::usedVirtualMemory
        
            typedef ::quint64 ( ::SireBase::MemInfo::*usedVirtualMemory_function_type )(  ) const;
            usedVirtualMemory_function_type usedVirtualMemory_function_value( &::SireBase::MemInfo::usedVirtualMemory );
            
            MemInfo_exposer.def( 
                "usedVirtualMemory"
                , usedVirtualMemory_function_value );
        
        }
        MemInfo_exposer.staticmethod( "startMonitoring" );
        MemInfo_exposer.staticmethod( "stopMonitoring" );
        MemInfo_exposer.staticmethod( "takeMeasurement" );
        MemInfo_exposer.def( "__copy__", &__copy__);
        MemInfo_exposer.def( "__deepcopy__", &__copy__);
        MemInfo_exposer.def( "clone", &__copy__);
        MemInfo_exposer.def( "__str__", &__str__< ::SireBase::MemInfo > );
        MemInfo_exposer.def( "__repr__", &__str__< ::SireBase::MemInfo > );
    }

}
