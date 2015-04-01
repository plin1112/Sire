// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "TIComponents.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "ticomponents.h"

#include "tostring.h"

#include "ticomponents.h"

SireAnalysis::TIComponents __copy__(const SireAnalysis::TIComponents &other){ return SireAnalysis::TIComponents(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_TIComponents_class(){

    { //::SireAnalysis::TIComponents
        typedef bp::class_< SireAnalysis::TIComponents, bp::bases< SireBase::Property > > TIComponents_exposer_t;
        TIComponents_exposer_t TIComponents_exposer = TIComponents_exposer_t( "TIComponents", bp::init< bp::optional< bool > >(( bp::arg("conserve_memory")=(bool)(true) )) );
        bp::scope TIComponents_scope( TIComponents_exposer );
        TIComponents_exposer.def( bp::init< QMap< double, SireSystem::FreeEnergyMonitor > const &, bp::optional< bool > >(( bp::arg("gradients"), bp::arg("conserve_memory")=(bool)(true) )) );
        TIComponents_exposer.def( bp::init< SireAnalysis::ComponentGradients const &, bp::optional< bool > >(( bp::arg("gradients"), bp::arg("conserve_memory")=(bool)(true) )) );
        TIComponents_exposer.def( bp::init< SireAnalysis::TIComponents const & >(( bp::arg("other") )) );
        { //::SireAnalysis::TIComponents::add
        
            typedef void ( ::SireAnalysis::TIComponents::*add_function_type )( ::QMap< double, SireSystem::FreeEnergyMonitor > const & ) ;
            add_function_type add_function_value( &::SireAnalysis::TIComponents::add );
            
            TIComponents_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("gradients") ) );
        
        }
        { //::SireAnalysis::TIComponents::add
        
            typedef void ( ::SireAnalysis::TIComponents::*add_function_type )( ::SireAnalysis::ComponentGradients const & ) ;
            add_function_type add_function_value( &::SireAnalysis::TIComponents::add );
            
            TIComponents_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("gradients") ) );
        
        }
        { //::SireAnalysis::TIComponents::at
        
            typedef ::SireAnalysis::ComponentGradients ( ::SireAnalysis::TIComponents::*at_function_type )( int ) const;
            at_function_type at_function_value( &::SireAnalysis::TIComponents::at );
            
            TIComponents_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireAnalysis::TIComponents::clear
        
            typedef void ( ::SireAnalysis::TIComponents::*clear_function_type )(  ) ;
            clear_function_type clear_function_value( &::SireAnalysis::TIComponents::clear );
            
            TIComponents_exposer.def( 
                "clear"
                , clear_function_value );
        
        }
        { //::SireAnalysis::TIComponents::conserveMemory
        
            typedef void ( ::SireAnalysis::TIComponents::*conserveMemory_function_type )(  ) ;
            conserveMemory_function_type conserveMemory_function_value( &::SireAnalysis::TIComponents::conserveMemory );
            
            TIComponents_exposer.def( 
                "conserveMemory"
                , conserveMemory_function_value );
        
        }
        { //::SireAnalysis::TIComponents::conservesMemory
        
            typedef bool ( ::SireAnalysis::TIComponents::*conservesMemory_function_type )(  ) const;
            conservesMemory_function_type conservesMemory_function_value( &::SireAnalysis::TIComponents::conservesMemory );
            
            TIComponents_exposer.def( 
                "conservesMemory"
                , conservesMemory_function_value );
        
        }
        { //::SireAnalysis::TIComponents::count
        
            typedef int ( ::SireAnalysis::TIComponents::*count_function_type )(  ) const;
            count_function_type count_function_value( &::SireAnalysis::TIComponents::count );
            
            TIComponents_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireAnalysis::TIComponents::gradients
        
            typedef ::QList< SireAnalysis::ComponentGradients > ( ::SireAnalysis::TIComponents::*gradients_function_type )(  ) const;
            gradients_function_type gradients_function_value( &::SireAnalysis::TIComponents::gradients );
            
            TIComponents_exposer.def( 
                "gradients"
                , gradients_function_value );
        
        }
        { //::SireAnalysis::TIComponents::lambdaValues
        
            typedef ::QList< double > ( ::SireAnalysis::TIComponents::*lambdaValues_function_type )(  ) const;
            lambdaValues_function_type lambdaValues_function_value( &::SireAnalysis::TIComponents::lambdaValues );
            
            TIComponents_exposer.def( 
                "lambdaValues"
                , lambdaValues_function_value );
        
        }
        { //::SireAnalysis::TIComponents::merge
        
            typedef ::SireAnalysis::ComponentGradients ( ::SireAnalysis::TIComponents::*merge_function_type )( int,int ) const;
            merge_function_type merge_function_value( &::SireAnalysis::TIComponents::merge );
            
            TIComponents_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("start"), bp::arg("end") ) );
        
        }
        { //::SireAnalysis::TIComponents::merge
        
            typedef ::SireAnalysis::ComponentGradients ( ::SireAnalysis::TIComponents::*merge_function_type )( ::QList< int > ) const;
            merge_function_type merge_function_value( &::SireAnalysis::TIComponents::merge );
            
            TIComponents_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("indicies") ) );
        
        }
        { //::SireAnalysis::TIComponents::nComponents
        
            typedef int ( ::SireAnalysis::TIComponents::*nComponents_function_type )(  ) const;
            nComponents_function_type nComponents_function_value( &::SireAnalysis::TIComponents::nComponents );
            
            TIComponents_exposer.def( 
                "nComponents"
                , nComponents_function_value );
        
        }
        { //::SireAnalysis::TIComponents::nIterations
        
            typedef int ( ::SireAnalysis::TIComponents::*nIterations_function_type )(  ) const;
            nIterations_function_type nIterations_function_value( &::SireAnalysis::TIComponents::nIterations );
            
            TIComponents_exposer.def( 
                "nIterations"
                , nIterations_function_value );
        
        }
        { //::SireAnalysis::TIComponents::nLambdaValues
        
            typedef int ( ::SireAnalysis::TIComponents::*nLambdaValues_function_type )(  ) const;
            nLambdaValues_function_type nLambdaValues_function_value( &::SireAnalysis::TIComponents::nLambdaValues );
            
            TIComponents_exposer.def( 
                "nLambdaValues"
                , nLambdaValues_function_value );
        
        }
        { //::SireAnalysis::TIComponents::nSamples
        
            typedef ::qint64 ( ::SireAnalysis::TIComponents::*nSamples_function_type )(  ) const;
            nSamples_function_type nSamples_function_value( &::SireAnalysis::TIComponents::nSamples );
            
            TIComponents_exposer.def( 
                "nSamples"
                , nSamples_function_value );
        
        }
        TIComponents_exposer.def( bp::self != bp::self );
        { //::SireAnalysis::TIComponents::operator=
        
            typedef ::SireAnalysis::TIComponents & ( ::SireAnalysis::TIComponents::*assign_function_type )( ::SireAnalysis::TIComponents const & ) ;
            assign_function_type assign_function_value( &::SireAnalysis::TIComponents::operator= );
            
            TIComponents_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        TIComponents_exposer.def( bp::self == bp::self );
        { //::SireAnalysis::TIComponents::operator[]
        
            typedef ::SireAnalysis::ComponentGradients ( ::SireAnalysis::TIComponents::*__getitem___function_type )( int ) const;
            __getitem___function_type __getitem___function_value( &::SireAnalysis::TIComponents::operator[] );
            
            TIComponents_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireAnalysis::TIComponents::removeAt
        
            typedef void ( ::SireAnalysis::TIComponents::*removeAt_function_type )( int ) ;
            removeAt_function_type removeAt_function_value( &::SireAnalysis::TIComponents::removeAt );
            
            TIComponents_exposer.def( 
                "removeAt"
                , removeAt_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireAnalysis::TIComponents::removeRange
        
            typedef void ( ::SireAnalysis::TIComponents::*removeRange_function_type )( int,int ) ;
            removeRange_function_type removeRange_function_value( &::SireAnalysis::TIComponents::removeRange );
            
            TIComponents_exposer.def( 
                "removeRange"
                , removeRange_function_value
                , ( bp::arg("start"), bp::arg("end") ) );
        
        }
        { //::SireAnalysis::TIComponents::rollingAverage
        
            typedef ::QList< SireAnalysis::ComponentGradients > ( ::SireAnalysis::TIComponents::*rollingAverage_function_type )( int ) const;
            rollingAverage_function_type rollingAverage_function_value( &::SireAnalysis::TIComponents::rollingAverage );
            
            TIComponents_exposer.def( 
                "rollingAverage"
                , rollingAverage_function_value
                , ( bp::arg("niterations") ) );
        
        }
        { //::SireAnalysis::TIComponents::set
        
            typedef void ( ::SireAnalysis::TIComponents::*set_function_type )( int,::QMap< double, SireSystem::FreeEnergyMonitor > const & ) ;
            set_function_type set_function_value( &::SireAnalysis::TIComponents::set );
            
            TIComponents_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("gradients") ) );
        
        }
        { //::SireAnalysis::TIComponents::set
        
            typedef void ( ::SireAnalysis::TIComponents::*set_function_type )( int,::SireAnalysis::ComponentGradients const & ) ;
            set_function_type set_function_value( &::SireAnalysis::TIComponents::set );
            
            TIComponents_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("gradients") ) );
        
        }
        { //::SireAnalysis::TIComponents::size
        
            typedef int ( ::SireAnalysis::TIComponents::*size_function_type )(  ) const;
            size_function_type size_function_value( &::SireAnalysis::TIComponents::size );
            
            TIComponents_exposer.def( 
                "size"
                , size_function_value );
        
        }
        { //::SireAnalysis::TIComponents::toString
        
            typedef ::QString ( ::SireAnalysis::TIComponents::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireAnalysis::TIComponents::toString );
            
            TIComponents_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireAnalysis::TIComponents::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireAnalysis::TIComponents::typeName );
            
            TIComponents_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireAnalysis::TIComponents::what
        
            typedef char const * ( ::SireAnalysis::TIComponents::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireAnalysis::TIComponents::what );
            
            TIComponents_exposer.def( 
                "what"
                , what_function_value );
        
        }
        TIComponents_exposer.staticmethod( "typeName" );
        TIComponents_exposer.def( "__copy__", &__copy__);
        TIComponents_exposer.def( "__deepcopy__", &__copy__);
        TIComponents_exposer.def( "clone", &__copy__);
        TIComponents_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireAnalysis::TIComponents >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TIComponents_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireAnalysis::TIComponents >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TIComponents_exposer.def( "__str__", &__str__< ::SireAnalysis::TIComponents > );
        TIComponents_exposer.def( "__repr__", &__str__< ::SireAnalysis::TIComponents > );
        TIComponents_exposer.def( "__len__", &__len_size< ::SireAnalysis::TIComponents > );
    }

}
