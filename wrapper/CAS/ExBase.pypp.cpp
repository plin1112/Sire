// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ExBase.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exbase.h"

#include "expression.h"

#include "expressionbase.h"

#include "functions.h"

#include "identities.h"

#include "values.h"

#include "exbase.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ExBase_class(){

    { //::SireCAS::ExBase
        typedef bp::class_< SireCAS::ExBase, boost::noncopyable > ExBase_exposer_t;
        ExBase_exposer_t ExBase_exposer = ExBase_exposer_t( "ExBase", bp::no_init );
        bp::scope ExBase_scope( ExBase_exposer );
        { //::SireCAS::ExBase::children
        
            typedef ::SireCAS::Expressions ( ::SireCAS::ExBase::*children_function_type)(  ) const;
            children_function_type children_function_value( &::SireCAS::ExBase::children );
            
            ExBase_exposer.def( 
                "children"
                , children_function_value );
        
        }
        { //::SireCAS::ExBase::conjugate
        
            typedef ::SireCAS::Expression ( ::SireCAS::ExBase::*conjugate_function_type)(  ) const;
            conjugate_function_type conjugate_function_value( &::SireCAS::ExBase::conjugate );
            
            ExBase_exposer.def( 
                "conjugate"
                , conjugate_function_value );
        
        }
        { //::SireCAS::ExBase::differentiate
        
            typedef ::SireCAS::Expression ( ::SireCAS::ExBase::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireCAS::ExBase::differentiate );
            
            ExBase_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::ExBase::evaluate
        
            typedef double ( ::SireCAS::ExBase::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ExBase::evaluate );
            
            ExBase_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::ExBase::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::ExBase::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ExBase::evaluate );
            
            ExBase_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireCAS::ExBase::expand
        
            typedef ::QList< SireCAS::Factor > ( ::SireCAS::ExBase::*expand_function_type)( ::SireCAS::Symbol const & ) const;
            expand_function_type expand_function_value( &::SireCAS::ExBase::expand );
            
            ExBase_exposer.def( 
                "expand"
                , expand_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::ExBase::functions
        
            typedef ::SireCAS::Functions ( ::SireCAS::ExBase::*functions_function_type)(  ) const;
            functions_function_type functions_function_value( &::SireCAS::ExBase::functions );
            
            ExBase_exposer.def( 
                "functions"
                , functions_function_value );
        
        }
        { //::SireCAS::ExBase::hash
        
            typedef ::uint ( ::SireCAS::ExBase::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::ExBase::hash );
            
            ExBase_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireCAS::ExBase::integrate
        
            typedef ::SireCAS::Expression ( ::SireCAS::ExBase::*integrate_function_type)( ::SireCAS::Symbol const & ) const;
            integrate_function_type integrate_function_value( &::SireCAS::ExBase::integrate );
            
            ExBase_exposer.def( 
                "integrate"
                , integrate_function_value
                , ( bp::arg("symbol") ) );
        
        }
        { //::SireCAS::ExBase::isComplex
        
            typedef bool ( ::SireCAS::ExBase::*isComplex_function_type)(  ) const;
            isComplex_function_type isComplex_function_value( &::SireCAS::ExBase::isComplex );
            
            ExBase_exposer.def( 
                "isComplex"
                , isComplex_function_value );
        
        }
        { //::SireCAS::ExBase::isCompound
        
            typedef bool ( ::SireCAS::ExBase::*isCompound_function_type)(  ) const;
            isCompound_function_type isCompound_function_value( &::SireCAS::ExBase::isCompound );
            
            ExBase_exposer.def( 
                "isCompound"
                , isCompound_function_value );
        
        }
        { //::SireCAS::ExBase::isConstant
        
            typedef bool ( ::SireCAS::ExBase::*isConstant_function_type)(  ) const;
            isConstant_function_type isConstant_function_value( &::SireCAS::ExBase::isConstant );
            
            ExBase_exposer.def( 
                "isConstant"
                , isConstant_function_value );
        
        }
        { //::SireCAS::ExBase::isFunction
        
            typedef bool ( ::SireCAS::ExBase::*isFunction_function_type)( ::SireCAS::Symbol const & ) const;
            isFunction_function_type isFunction_function_value( &::SireCAS::ExBase::isFunction );
            
            ExBase_exposer.def( 
                "isFunction"
                , isFunction_function_value
                , ( bp::arg("arg0") ) );
        
        }
        ExBase_exposer.def( bp::self != bp::self );
        ExBase_exposer.def( -bp::self );
        { //::SireCAS::ExBase::operator=
        
            typedef ::SireCAS::ExBase & ( ::SireCAS::ExBase::*assign_function_type)( ::SireCAS::ExBase const & ) ;
            assign_function_type assign_function_value( &::SireCAS::ExBase::operator= );
            
            ExBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("arg0") )
                , bp::return_self< >() );
        
        }
        ExBase_exposer.def( bp::self == bp::self );
        { //::SireCAS::ExBase::series
        
            typedef ::SireCAS::Expression ( ::SireCAS::ExBase::*series_function_type)( ::SireCAS::Symbol const &,int ) const;
            series_function_type series_function_value( &::SireCAS::ExBase::series );
            
            ExBase_exposer.def( 
                "series"
                , series_function_value
                , ( bp::arg("symbol"), bp::arg("n") ) );
        
        }
        { //::SireCAS::ExBase::simplify
        
            typedef ::SireCAS::Expression ( ::SireCAS::ExBase::*simplify_function_type)( int ) const;
            simplify_function_type simplify_function_value( &::SireCAS::ExBase::simplify );
            
            ExBase_exposer.def( 
                "simplify"
                , simplify_function_value
                , ( bp::arg("options")=(int)(0) ) );
        
        }
        { //::SireCAS::ExBase::substitute
        
            typedef ::SireCAS::Expression ( ::SireCAS::ExBase::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireCAS::ExBase::substitute );
            
            ExBase_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") ) );
        
        }
        { //::SireCAS::ExBase::symbols
        
            typedef ::SireCAS::Symbols ( ::SireCAS::ExBase::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireCAS::ExBase::symbols );
            
            ExBase_exposer.def( 
                "symbols"
                , symbols_function_value );
        
        }
        { //::SireCAS::ExBase::toOpenMMString
        
            typedef ::QString ( ::SireCAS::ExBase::*toOpenMMString_function_type)(  ) const;
            toOpenMMString_function_type toOpenMMString_function_value( &::SireCAS::ExBase::toOpenMMString );
            
            ExBase_exposer.def( 
                "toOpenMMString"
                , toOpenMMString_function_value );
        
        }
        { //::SireCAS::ExBase::toString
        
            typedef ::QString ( ::SireCAS::ExBase::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireCAS::ExBase::toString );
            
            ExBase_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireCAS::ExBase::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ExBase::typeName );
            
            ExBase_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireCAS::ExBase::what
        
            typedef char const * ( ::SireCAS::ExBase::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ExBase::what );
            
            ExBase_exposer.def( 
                "what"
                , what_function_value );
        
        }
        ExBase_exposer.staticmethod( "typeName" );
        ExBase_exposer.def( bp::self * bp::other< SireMaths::Complex >() );
        ExBase_exposer.def( bp::other< double >() * bp::self );
        ExBase_exposer.def( bp::self * bp::other< double >() );
        ExBase_exposer.def( bp::self * bp::other< SireCAS::Expression >() );
        ExBase_exposer.def( bp::self * bp::self );
        ExBase_exposer.def( bp::self + bp::other< SireMaths::Complex >() );
        ExBase_exposer.def( bp::other< double >() + bp::self );
        ExBase_exposer.def( bp::self + bp::other< double >() );
        ExBase_exposer.def( bp::self + bp::other< SireCAS::Expression >() );
        ExBase_exposer.def( bp::self + bp::self );
        ExBase_exposer.def( bp::self - bp::other< SireMaths::Complex >() );
        ExBase_exposer.def( bp::other< double >() - bp::self );
        ExBase_exposer.def( bp::self - bp::other< double >() );
        ExBase_exposer.def( bp::self - bp::other< SireCAS::Expression >() );
        ExBase_exposer.def( bp::self - bp::self );
        ExBase_exposer.def( bp::self / bp::other< SireMaths::Complex >() );
        ExBase_exposer.def( bp::other< double >() / bp::self );
        ExBase_exposer.def( bp::self / bp::other< double >() );
        ExBase_exposer.def( bp::self / bp::other< SireCAS::Expression >() );
        ExBase_exposer.def( bp::self / bp::self );
        ExBase_exposer.def( self + self );
        ExBase_exposer.def( self - self );
        ExBase_exposer.def( self * self );
        ExBase_exposer.def( self / self );
        ExBase_exposer.def( other<double>() + self );
        ExBase_exposer.def( other<double>() - self );
        ExBase_exposer.def( other<double>() * self );
        ExBase_exposer.def( other<double>() / self );
        ExBase_exposer.def( self + other<double>() );
        ExBase_exposer.def( self - other<double>() );
        ExBase_exposer.def( self * other<double>() );
        ExBase_exposer.def( self / other<double>() );
        ExBase_exposer.def( other<SireMaths::Complex>() + self );
        ExBase_exposer.def( other<SireMaths::Complex>() - self );
        ExBase_exposer.def( other<SireMaths::Complex>() * self );
        ExBase_exposer.def( other<SireMaths::Complex>() / self );
        ExBase_exposer.def( self + other<SireMaths::Complex>() );
        ExBase_exposer.def( self - other<SireMaths::Complex>() );
        ExBase_exposer.def( self * other<SireMaths::Complex>() );
        ExBase_exposer.def( self / other<SireMaths::Complex>() );
        ExBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ExBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ExBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ExBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ExBase_exposer.def( "__str__", &__str__< ::SireCAS::ExBase > );
        ExBase_exposer.def( "__repr__", &__str__< ::SireCAS::ExBase > );
    }

}
