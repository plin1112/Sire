// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GridFF2.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/constants.h"

#include "SireMaths/multidouble.h"

#include "SireMaths/multifloat.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "atomljs.h"

#include "cljpotential.h"

#include "gridff2.h"

#include <QDebug>

#include <QElapsedTimer>

#include <QTime>

#include "gridff2.h"

SireMM::GridFF2 __copy__(const SireMM::GridFF2 &other){ return SireMM::GridFF2(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_GridFF2_class(){

    { //::SireMM::GridFF2
        typedef bp::class_< SireMM::GridFF2, bp::bases< SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> >, SireFF::FF3D, SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> >, SireMM::CLJPotentialInterface<SireMM::InterCLJPotential>, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > GridFF2_exposer_t;
        GridFF2_exposer_t GridFF2_exposer = GridFF2_exposer_t( "GridFF2", bp::init< >() );
        bp::scope GridFF2_scope( GridFF2_exposer );
        GridFF2_exposer.def( bp::init< QString const & >(( bp::arg("name") )) );
        GridFF2_exposer.def( bp::init< SireMM::GridFF2 const & >(( bp::arg("other") )) );
        { //::SireMM::GridFF2::addFixedAtoms
        
            typedef void ( ::SireMM::GridFF2::*addFixedAtoms_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::GridFF2::addFixedAtoms );
            
            GridFF2_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("fixed_atoms"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMM::GridFF2::addFixedAtoms
        
            typedef void ( ::SireMM::GridFF2::*addFixedAtoms_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::GridFF2::addFixedAtoms );
            
            GridFF2_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("fixed_atoms"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMM::GridFF2::addFixedAtoms
        
            typedef void ( ::SireMM::GridFF2::*addFixedAtoms_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::GridFF2::addFixedAtoms );
            
            GridFF2_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("fixed_atoms"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMM::GridFF2::addFixedAtoms
        
            typedef void ( ::SireMM::GridFF2::*addFixedAtoms_function_type)( ::SireMM::GridFF2 const & ) ;
            addFixedAtoms_function_type addFixedAtoms_function_value( &::SireMM::GridFF2::addFixedAtoms );
            
            GridFF2_exposer.def( 
                "addFixedAtoms"
                , addFixedAtoms_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireMM::GridFF2::buffer
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::GridFF2::*buffer_function_type)(  ) const;
            buffer_function_type buffer_function_value( &::SireMM::GridFF2::buffer );
            
            GridFF2_exposer.def( 
                "buffer"
                , buffer_function_value );
        
        }
        { //::SireMM::GridFF2::coulombCutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::GridFF2::*coulombCutoff_function_type)(  ) const;
            coulombCutoff_function_type coulombCutoff_function_value( &::SireMM::GridFF2::coulombCutoff );
            
            GridFF2_exposer.def( 
                "coulombCutoff"
                , coulombCutoff_function_value );
        
        }
        { //::SireMM::GridFF2::ljCutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::GridFF2::*ljCutoff_function_type)(  ) const;
            ljCutoff_function_type ljCutoff_function_value( &::SireMM::GridFF2::ljCutoff );
            
            GridFF2_exposer.def( 
                "ljCutoff"
                , ljCutoff_function_value );
        
        }
        { //::SireMM::GridFF2::mustNowRecalculateFromScratch
        
            typedef void ( ::SireMM::GridFF2::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireMM::GridFF2::mustNowRecalculateFromScratch );
            
            GridFF2_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value );
        
        }
        GridFF2_exposer.def( bp::self != bp::self );
        { //::SireMM::GridFF2::operator=
        
            typedef ::SireMM::GridFF2 & ( ::SireMM::GridFF2::*assign_function_type)( ::SireMM::GridFF2 const & ) ;
            assign_function_type assign_function_value( &::SireMM::GridFF2::operator= );
            
            GridFF2_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        GridFF2_exposer.def( bp::self == bp::self );
        { //::SireMM::GridFF2::setBuffer
        
            typedef void ( ::SireMM::GridFF2::*setBuffer_function_type)( ::SireUnits::Dimension::Length ) ;
            setBuffer_function_type setBuffer_function_value( &::SireMM::GridFF2::setBuffer );
            
            GridFF2_exposer.def( 
                "setBuffer"
                , setBuffer_function_value
                , ( bp::arg("buffer") ) );
        
        }
        { //::SireMM::GridFF2::setCoulombCutoff
        
            typedef void ( ::SireMM::GridFF2::*setCoulombCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setCoulombCutoff_function_type setCoulombCutoff_function_value( &::SireMM::GridFF2::setCoulombCutoff );
            
            GridFF2_exposer.def( 
                "setCoulombCutoff"
                , setCoulombCutoff_function_value
                , ( bp::arg("cutoff") ) );
        
        }
        { //::SireMM::GridFF2::setGridSpacing
        
            typedef void ( ::SireMM::GridFF2::*setGridSpacing_function_type)( ::SireUnits::Dimension::Length ) ;
            setGridSpacing_function_type setGridSpacing_function_value( &::SireMM::GridFF2::setGridSpacing );
            
            GridFF2_exposer.def( 
                "setGridSpacing"
                , setGridSpacing_function_value
                , ( bp::arg("spacing") ) );
        
        }
        { //::SireMM::GridFF2::setLJCutoff
        
            typedef void ( ::SireMM::GridFF2::*setLJCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setLJCutoff_function_type setLJCutoff_function_value( &::SireMM::GridFF2::setLJCutoff );
            
            GridFF2_exposer.def( 
                "setLJCutoff"
                , setLJCutoff_function_value
                , ( bp::arg("cutoff") ) );
        
        }
        { //::SireMM::GridFF2::setReactionFieldDielectric
        
            typedef bool ( ::SireMM::GridFF2::*setReactionFieldDielectric_function_type)( double ) ;
            setReactionFieldDielectric_function_type setReactionFieldDielectric_function_value( &::SireMM::GridFF2::setReactionFieldDielectric );
            
            GridFF2_exposer.def( 
                "setReactionFieldDielectric"
                , setReactionFieldDielectric_function_value
                , ( bp::arg("dielectric") ) );
        
        }
        { //::SireMM::GridFF2::setShiftElectrostatics
        
            typedef bool ( ::SireMM::GridFF2::*setShiftElectrostatics_function_type)( bool ) ;
            setShiftElectrostatics_function_type setShiftElectrostatics_function_value( &::SireMM::GridFF2::setShiftElectrostatics );
            
            GridFF2_exposer.def( 
                "setShiftElectrostatics"
                , setShiftElectrostatics_function_value
                , ( bp::arg("on") ) );
        
        }
        { //::SireMM::GridFF2::setUseReactionField
        
            typedef bool ( ::SireMM::GridFF2::*setUseReactionField_function_type)( bool ) ;
            setUseReactionField_function_type setUseReactionField_function_value( &::SireMM::GridFF2::setUseReactionField );
            
            GridFF2_exposer.def( 
                "setUseReactionField"
                , setUseReactionField_function_value
                , ( bp::arg("on") ) );
        
        }
        { //::SireMM::GridFF2::spacing
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::GridFF2::*spacing_function_type)(  ) const;
            spacing_function_type spacing_function_value( &::SireMM::GridFF2::spacing );
            
            GridFF2_exposer.def( 
                "spacing"
                , spacing_function_value );
        
        }
        { //::SireMM::GridFF2::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::GridFF2::typeName );
            
            GridFF2_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::GridFF2::what
        
            typedef char const * ( ::SireMM::GridFF2::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::GridFF2::what );
            
            GridFF2_exposer.def( 
                "what"
                , what_function_value );
        
        }
        GridFF2_exposer.staticmethod( "typeName" );
        GridFF2_exposer.def( "__copy__", &__copy__);
        GridFF2_exposer.def( "__deepcopy__", &__copy__);
        GridFF2_exposer.def( "clone", &__copy__);
        GridFF2_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::GridFF2 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridFF2_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::GridFF2 >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridFF2_exposer.def( "__str__", &__str__< ::SireMM::GridFF2 > );
        GridFF2_exposer.def( "__repr__", &__str__< ::SireMM::GridFF2 > );
        GridFF2_exposer.def( "__len__", &__len_count< ::SireMM::GridFF2 > );
    }

}
