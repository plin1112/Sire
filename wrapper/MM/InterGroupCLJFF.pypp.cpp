// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "InterGroupCLJFF.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intercljff.h"

#include "intercljff.h"

SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > __copy__(const SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > &other){ return SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> >(other); }

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_InterGroupCLJFF_class(){

    { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >
        typedef bp::class_< SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >, bp::bases< SireFF::FF3D, SireFF::Inter2B2GFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> >, SireMM::CLJPotentialInterface<SireMM::InterCLJPotential>, SireFF::G2FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > InterGroupCLJFF_exposer_t;
        InterGroupCLJFF_exposer_t InterGroupCLJFF_exposer = InterGroupCLJFF_exposer_t( "InterGroupCLJFF", bp::init< >() );
        bp::scope InterGroupCLJFF_scope( InterGroupCLJFF_exposer );
        InterGroupCLJFF_exposer.def( bp::init< QString const & >(( bp::arg("name") )) );
        InterGroupCLJFF_exposer.def( bp::init< SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > const & >(( bp::arg("other") )) );
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::energy
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*energy_function_type)( ::SireFF::EnergyTable &,double ) ;
            energy_function_type energy_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::energy );
            
            InterGroupCLJFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("energytable"), bp::arg("scale_energy")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::energy
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*energy_function_type)( ::SireFF::EnergyTable &,::SireCAS::Symbol const &,double ) ;
            energy_function_type energy_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::energy );
            
            InterGroupCLJFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("energytable"), bp::arg("symbol"), bp::arg("scale_energy")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*field_function_type)( ::SireFF::FieldTable &,double ) ;
            field_function_type field_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field );
            
            InterGroupCLJFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("scale_field")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*field_function_type)( ::SireFF::FieldTable &,::SireCAS::Symbol const &,double ) ;
            field_function_type field_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field );
            
            InterGroupCLJFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("component"), bp::arg("scale_field")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*field_function_type)( ::SireFF::FieldTable &,::SireFF::Probe const &,double ) ;
            field_function_type field_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field );
            
            InterGroupCLJFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("probe"), bp::arg("scale_field")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*field_function_type)( ::SireFF::FieldTable &,::SireCAS::Symbol const &,::SireFF::Probe const &,double ) ;
            field_function_type field_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::field );
            
            InterGroupCLJFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("component"), bp::arg("probe"), bp::arg("scale_field")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::force
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*force_function_type)( ::SireFF::ForceTable &,double ) ;
            force_function_type force_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::force );
            
            InterGroupCLJFF_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("scale_force")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::force
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*force_function_type)( ::SireFF::ForceTable &,::SireCAS::Symbol const &,double ) ;
            force_function_type force_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::force );
            
            InterGroupCLJFF_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("symbol"), bp::arg("scale_force")=1 ) );
        
        }
        InterGroupCLJFF_exposer.def( bp::self != bp::self );
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::operator=
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > & ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*assign_function_type)( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > const & ) ;
            assign_function_type assign_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::operator= );
            
            InterGroupCLJFF_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        InterGroupCLJFF_exposer.def( bp::self == bp::self );
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*potential_function_type)( ::SireFF::PotentialTable &,double ) ;
            potential_function_type potential_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential );
            
            InterGroupCLJFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("scale_potential")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*potential_function_type)( ::SireFF::PotentialTable &,::SireCAS::Symbol const &,double ) ;
            potential_function_type potential_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential );
            
            InterGroupCLJFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("component"), bp::arg("scale_potential")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*potential_function_type)( ::SireFF::PotentialTable &,::SireFF::Probe const &,double ) ;
            potential_function_type potential_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential );
            
            InterGroupCLJFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("probe"), bp::arg("scale_potential")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*potential_function_type)( ::SireFF::PotentialTable &,::SireCAS::Symbol const &,::SireFF::Probe const &,double ) ;
            potential_function_type potential_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::potential );
            
            InterGroupCLJFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("component"), bp::arg("probe"), bp::arg("scale_potential")=1 ) );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::typeName
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::typeName );
            
            InterGroupCLJFF_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::what
        
            typedef SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > > exported_class_t;
            typedef char const * ( ::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::Inter2B2G3DFF< SireMM::CLJPotentialInterface< SireMM::InterCLJPotential > >::what );
            
            InterGroupCLJFF_exposer.def( 
                "what"
                , what_function_value );
        
        }
        InterGroupCLJFF_exposer.staticmethod( "typeName" );
        InterGroupCLJFF_exposer.def( "__copy__", &__copy__);
        InterGroupCLJFF_exposer.def( "__deepcopy__", &__copy__);
        InterGroupCLJFF_exposer.def( "clone", &__copy__);
        InterGroupCLJFF_exposer.def( "__str__", &__str__< ::SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > > );
        InterGroupCLJFF_exposer.def( "__repr__", &__str__< ::SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > > );
        InterGroupCLJFF_exposer.def( "__len__", &__len_count< ::SireFF::Inter2B2G3DFF<SireMM::CLJPotentialInterface<SireMM::InterCLJPotential> > > );
    }

}
