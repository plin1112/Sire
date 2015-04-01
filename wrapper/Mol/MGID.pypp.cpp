// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MGID.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/incremint.h"

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "mgid.h"

#include "mgidentifier.h"

#include "mgidx.h"

#include "mgname.h"

#include "mgnum.h"

#include "moleculegroups.h"

#include "tostring.h"

#include "mgid.h"

#include "Helpers/str.hpp"

void register_MGID_class(){

    { //::SireMol::MGID
        typedef bp::class_< SireMol::MGID, bp::bases< SireID::ID >, boost::noncopyable > MGID_exposer_t;
        MGID_exposer_t MGID_exposer = MGID_exposer_t( "MGID", bp::no_init );
        bp::scope MGID_scope( MGID_exposer );
        { //::SireMol::MGID::map
        
            typedef ::QList< SireMol::MGNum > ( ::SireMol::MGID::*map_function_type )( ::SireMol::MolGroupsBase const & ) const;
            map_function_type map_function_value( &::SireMol::MGID::map );
            
            MGID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molgroups") ) );
        
        }
        MGID_exposer.def( bp::self & bp::self );
        { //::SireMol::MGID::operator()
        
            typedef ::SireID::Specify< SireMol::MGID > ( ::SireMol::MGID::*__call___function_type )( int ) const;
            __call___function_type __call___function_value( &::SireMol::MGID::operator() );
            
            MGID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::MGID::operator()
        
            typedef ::SireID::Specify< SireMol::MGID > ( ::SireMol::MGID::*__call___function_type )( int,int ) const;
            __call___function_type __call___function_value( &::SireMol::MGID::operator() );
            
            MGID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        MGID_exposer.def( bp::self * bp::self );
        MGID_exposer.def( bp::self + bp::self );
        { //::SireMol::MGID::operator[]
        
            typedef ::SireID::Specify< SireMol::MGID > ( ::SireMol::MGID::*__getitem___function_type )( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::MGID::operator[] );
            
            MGID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        MGID_exposer.def( bp::self | bp::self );
        { //::SireMol::MGID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MGID::typeName );
            
            MGID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        MGID_exposer.staticmethod( "typeName" );
        MGID_exposer.def( "__str__", &__str__< ::SireMol::MGID > );
        MGID_exposer.def( "__repr__", &__str__< ::SireMol::MGID > );
    }

}
