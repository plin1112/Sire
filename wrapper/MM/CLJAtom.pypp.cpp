// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CLJAtom.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMol/atom.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/molecules.h"

#include "SireMol/molidx.h"

#include "SireMol/partialmolecule.h"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "atomljs.h"

#include "cljatoms.h"

#include <QElapsedTimer>

#include "cljatoms.h"

SireMM::CLJAtom __copy__(const SireMM::CLJAtom &other){ return SireMM::CLJAtom(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJAtom_class(){

    { //::SireMM::CLJAtom
        typedef bp::class_< SireMM::CLJAtom > CLJAtom_exposer_t;
        CLJAtom_exposer_t CLJAtom_exposer = CLJAtom_exposer_t( "CLJAtom", bp::init< >() );
        bp::scope CLJAtom_scope( CLJAtom_exposer );
        CLJAtom_exposer.def( bp::init< SireMaths::Vector, SireUnits::Dimension::Charge, SireMM::LJParameter, bp::optional< qint32 > >(( bp::arg("coords"), bp::arg("charge"), bp::arg("ljparam"), bp::arg("idnum")=(int)(1) )) );
        CLJAtom_exposer.def( bp::init< SireMM::CLJAtom const & >(( bp::arg("other") )) );
        { //::SireMM::CLJAtom::ID
        
            typedef ::qint32 ( ::SireMM::CLJAtom::*ID_function_type )(  ) const;
            ID_function_type ID_function_value( &::SireMM::CLJAtom::ID );
            
            CLJAtom_exposer.def( 
                "ID"
                , ID_function_value );
        
        }
        { //::SireMM::CLJAtom::buildFrom
        
            typedef ::QVector< SireMM::CLJAtom > ( *buildFrom_function_type )( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & );
            buildFrom_function_type buildFrom_function_value( &::SireMM::CLJAtom::buildFrom );
            
            CLJAtom_exposer.def( 
                "buildFrom"
                , buildFrom_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMM::CLJAtom::charge
        
            typedef ::SireUnits::Dimension::Charge ( ::SireMM::CLJAtom::*charge_function_type )(  ) const;
            charge_function_type charge_function_value( &::SireMM::CLJAtom::charge );
            
            CLJAtom_exposer.def( 
                "charge"
                , charge_function_value );
        
        }
        { //::SireMM::CLJAtom::coordinates
        
            typedef ::SireMaths::Vector ( ::SireMM::CLJAtom::*coordinates_function_type )(  ) const;
            coordinates_function_type coordinates_function_value( &::SireMM::CLJAtom::coordinates );
            
            CLJAtom_exposer.def( 
                "coordinates"
                , coordinates_function_value );
        
        }
        { //::SireMM::CLJAtom::isDummy
        
            typedef bool ( ::SireMM::CLJAtom::*isDummy_function_type )(  ) const;
            isDummy_function_type isDummy_function_value( &::SireMM::CLJAtom::isDummy );
            
            CLJAtom_exposer.def( 
                "isDummy"
                , isDummy_function_value );
        
        }
        { //::SireMM::CLJAtom::isNull
        
            typedef bool ( ::SireMM::CLJAtom::*isNull_function_type )(  ) const;
            isNull_function_type isNull_function_value( &::SireMM::CLJAtom::isNull );
            
            CLJAtom_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMM::CLJAtom::ljParameter
        
            typedef ::SireMM::LJParameter ( ::SireMM::CLJAtom::*ljParameter_function_type )(  ) const;
            ljParameter_function_type ljParameter_function_value( &::SireMM::CLJAtom::ljParameter );
            
            CLJAtom_exposer.def( 
                "ljParameter"
                , ljParameter_function_value );
        
        }
        { //::SireMM::CLJAtom::negate
        
            typedef ::SireMM::CLJAtom ( ::SireMM::CLJAtom::*negate_function_type )(  ) const;
            negate_function_type negate_function_value( &::SireMM::CLJAtom::negate );
            
            CLJAtom_exposer.def( 
                "negate"
                , negate_function_value );
        
        }
        CLJAtom_exposer.def( bp::self != bp::self );
        { //::SireMM::CLJAtom::operator=
        
            typedef ::SireMM::CLJAtom & ( ::SireMM::CLJAtom::*assign_function_type )( ::SireMM::CLJAtom const & ) ;
            assign_function_type assign_function_value( &::SireMM::CLJAtom::operator= );
            
            CLJAtom_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        CLJAtom_exposer.def( bp::self == bp::self );
        { //::SireMM::CLJAtom::toString
        
            typedef ::QString ( ::SireMM::CLJAtom::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireMM::CLJAtom::toString );
            
            CLJAtom_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMM::CLJAtom::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJAtom::typeName );
            
            CLJAtom_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CLJAtom::what
        
            typedef char const * ( ::SireMM::CLJAtom::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireMM::CLJAtom::what );
            
            CLJAtom_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CLJAtom_exposer.staticmethod( "buildFrom" );
        CLJAtom_exposer.staticmethod( "typeName" );
        CLJAtom_exposer.def( "__copy__", &__copy__);
        CLJAtom_exposer.def( "__deepcopy__", &__copy__);
        CLJAtom_exposer.def( "clone", &__copy__);
        CLJAtom_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJAtom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJAtom_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJAtom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJAtom_exposer.def( "__str__", &__str__< ::SireMM::CLJAtom > );
        CLJAtom_exposer.def( "__repr__", &__str__< ::SireMM::CLJAtom > );
    }

}