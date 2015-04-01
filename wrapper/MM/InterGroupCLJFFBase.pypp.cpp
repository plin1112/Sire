// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InterGroupCLJFFBase.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intercljff.h"

#include "intercljff.h"

SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > __copy__(const SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > &other){ return SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_InterGroupCLJFFBase_class(){

    { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >
        typedef bp::class_< SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >, bp::bases< SireMM::CLJPotentialInterface<SireMM::InterCLJPotential>, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > InterGroupCLJFFBase_exposer_t;
        InterGroupCLJFFBase_exposer_t InterGroupCLJFFBase_exposer = InterGroupCLJFFBase_exposer_t( "InterGroupCLJFFBase", bp::init< >() );
        bp::scope InterGroupCLJFFBase_scope( InterGroupCLJFFBase_exposer );
        InterGroupCLJFFBase_exposer.def( bp::init< QString const & >(( bp::arg("name") )) );
        InterGroupCLJFFBase_exposer.def( bp::init< SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > const & >(( bp::arg("other") )) );
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::components
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef ::SireMM::CLJComponent const & ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*components_function_type )(  ) const;
            components_function_type components_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::components );
            
            InterGroupCLJFFBase_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::containsProperty
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*containsProperty_function_type )( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::containsProperty );
            
            InterGroupCLJFFBase_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::mustNowRecalculateFromScratch
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*mustNowRecalculateFromScratch_function_type )(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::mustNowRecalculateFromScratch );
            
            InterGroupCLJFFBase_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value );
        
        }
        InterGroupCLJFFBase_exposer.def( bp::self != bp::self );
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::operator=
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > & ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*assign_function_type )( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > const & ) ;
            assign_function_type assign_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::operator= );
            
            InterGroupCLJFFBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        InterGroupCLJFFBase_exposer.def( bp::self == bp::self );
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::properties
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*properties_function_type )(  ) const;
            properties_function_type properties_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::properties );
            
            InterGroupCLJFFBase_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::property
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*property_function_type )( ::QString const & ) const;
            property_function_type property_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::property );
            
            InterGroupCLJFFBase_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::setProperty
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*setProperty_function_type )( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::setProperty );
            
            InterGroupCLJFFBase_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") ) );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::typeName
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::typeName );
            
            InterGroupCLJFFBase_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::what
        
            typedef SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef char const * ( ::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireFF::Inter2B2GFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::what );
            
            InterGroupCLJFFBase_exposer.def( 
                "what"
                , what_function_value );
        
        }
        InterGroupCLJFFBase_exposer.staticmethod( "typeName" );
        InterGroupCLJFFBase_exposer.def( "__copy__", &__copy__);
        InterGroupCLJFFBase_exposer.def( "__deepcopy__", &__copy__);
        InterGroupCLJFFBase_exposer.def( "clone", &__copy__);
        InterGroupCLJFFBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterGroupCLJFFBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InterGroupCLJFFBase_exposer.def( "__str__", &__str__< ::SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > > );
        InterGroupCLJFFBase_exposer.def( "__repr__", &__str__< ::SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > > );
        InterGroupCLJFFBase_exposer.def( "__len__", &__len_count< ::SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > > );
    }

}