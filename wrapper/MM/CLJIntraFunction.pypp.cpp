// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJIntraFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/lengthproperty.h"

#include "SireBase/numberproperty.h"

#include "SireBase/properties.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireMaths/multidouble.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/cartesian.h"

#include "SireVol/periodicbox.h"

#include "cljboxes.h"

#include "cljdelta.h"

#include "cljfunction.h"

#include "gridinfo.h"

#include "switchingfunction.h"

#include "tbb/blocked_range.h"

#include "tbb/parallel_for.h"

#include "tostring.h"

#include <QElapsedTimer>

#include "cljfunction.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJIntraFunction_class(){

    { //::SireMM::CLJIntraFunction
        typedef bp::class_< SireMM::CLJIntraFunction, bp::bases< SireMM::CLJCutoffFunction, SireMM::CLJFunction, SireBase::Property >, boost::noncopyable > CLJIntraFunction_exposer_t;
        CLJIntraFunction_exposer_t CLJIntraFunction_exposer = CLJIntraFunction_exposer_t( "CLJIntraFunction", bp::no_init );
        bp::scope CLJIntraFunction_scope( CLJIntraFunction_exposer );
        { //::SireMM::CLJIntraFunction::connectivity
        
            typedef ::SireMol::Connectivity const & ( ::SireMM::CLJIntraFunction::*connectivity_function_type )(  ) const;
            connectivity_function_type connectivity_function_value( &::SireMM::CLJIntraFunction::connectivity );
            
            CLJIntraFunction_exposer.def( 
                "connectivity"
                , connectivity_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMM::CLJIntraFunction::containsProperty
        
            typedef bool ( ::SireMM::CLJIntraFunction::*containsProperty_function_type )( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::CLJIntraFunction::containsProperty );
            
            CLJIntraFunction_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJIntraFunction::properties
        
            typedef ::SireBase::Properties ( ::SireMM::CLJIntraFunction::*properties_function_type )(  ) const;
            properties_function_type properties_function_value( &::SireMM::CLJIntraFunction::properties );
            
            CLJIntraFunction_exposer.def( 
                "properties"
                , properties_function_value );
        
        }
        { //::SireMM::CLJIntraFunction::property
        
            typedef ::SireBase::PropertyPtr ( ::SireMM::CLJIntraFunction::*property_function_type )( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::CLJIntraFunction::property );
            
            CLJIntraFunction_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJIntraFunction::setConnectivity
        
            typedef void ( ::SireMM::CLJIntraFunction::*setConnectivity_function_type )( ::SireMol::Connectivity const & ) ;
            setConnectivity_function_type setConnectivity_function_value( &::SireMM::CLJIntraFunction::setConnectivity );
            
            CLJIntraFunction_exposer.def( 
                "setConnectivity"
                , setConnectivity_function_value
                , ( bp::arg("connectivity") ) );
        
        }
        { //::SireMM::CLJIntraFunction::setConnectivity
        
            typedef void ( ::SireMM::CLJIntraFunction::*setConnectivity_function_type )( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            setConnectivity_function_type setConnectivity_function_value( &::SireMM::CLJIntraFunction::setConnectivity );
            
            CLJIntraFunction_exposer.def( 
                "setConnectivity"
                , setConnectivity_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMM::CLJIntraFunction::setProperty
        
            typedef ::SireMM::CLJFunctionPtr ( ::SireMM::CLJIntraFunction::*setProperty_function_type )( ::QString const &,::SireBase::Property const & ) const;
            setProperty_function_type setProperty_function_value( &::SireMM::CLJIntraFunction::setProperty );
            
            CLJIntraFunction_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::SireMM::CLJIntraFunction::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJIntraFunction::typeName );
            
            CLJIntraFunction_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        CLJIntraFunction_exposer.staticmethod( "typeName" );
        CLJIntraFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJIntraFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJIntraFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJIntraFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJIntraFunction_exposer.def( "__str__", &__str__< ::SireMM::CLJIntraFunction > );
        CLJIntraFunction_exposer.def( "__repr__", &__str__< ::SireMM::CLJIntraFunction > );
    }

}