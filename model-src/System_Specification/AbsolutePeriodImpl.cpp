// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * System_Specification/AbsolutePeriodImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AbsolutePeriod.hpp"
#include <System_Specification/System_SpecificationPackage.hpp>
#include <System_Specification/Period.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::System_Specification;

/*PROTECTED REGION ID(AbsolutePeriodImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AbsolutePeriod::_initialize()
{
    // Supertypes
    ::System_Specification::Period::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(AbsolutePeriodImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject AbsolutePeriod::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__EANNOTATIONS:
    {
        _any = m_eAnnotations->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__SIGNATURE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_signature);
    }
        return _any;
    case ::System_Specification::System_SpecificationPackage::NAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any, m_name);
    }
        return _any;
    case ::System_Specification::System_SpecificationPackage::PERIOD__PHASE:
    {
        ::ecorecpp::mapping::any_traits< ::System_Specification::TimeType >::toAny(
                _any, m_phase);
    }
        return _any;
    case ::System_Specification::System_SpecificationPackage::ABSOLUTEPERIOD__PERIODLENGTH:
    {
        ::ecorecpp::mapping::any_traits< ::System_Specification::TimeType >::toAny(
                _any, m_periodLength);
    }
        return _any;

    }
    throw "Error";
}

void AbsolutePeriod::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__EANNOTATIONS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::System_Specification::ModelElement::getEAnnotations().clear();
        ::System_Specification::ModelElement::getEAnnotations().insert_all(*_t0);
    }
        return;
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__SIGNATURE:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_signature);
    }
        return;
    case ::System_Specification::System_SpecificationPackage::NAMEDELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_name);
    }
        return;
    case ::System_Specification::System_SpecificationPackage::PERIOD__PHASE:
    {
        ::ecorecpp::mapping::any_traits< ::System_Specification::TimeType >::fromAny(
                _newValue, m_phase);
    }
        return;
    case ::System_Specification::System_SpecificationPackage::ABSOLUTEPERIOD__PERIODLENGTH:
    {
        ::ecorecpp::mapping::any_traits< ::System_Specification::TimeType >::fromAny(
                _newValue, m_periodLength);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AbsolutePeriod::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__SIGNATURE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_signature);
    case ::System_Specification::System_SpecificationPackage::NAMEDELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_name);
    case ::System_Specification::System_SpecificationPackage::PERIOD__PHASE:
        /*PROTECTED REGION ID(AbsolutePeriodeIsSet__AbsolutePeriodm_phase) ENABLED START*/
        // Please, enable the protected region if you changed it.
        // To do this, add the keyword ENABLED before START.
        return true;
        /*PROTECTED REGION END*/
    case ::System_Specification::System_SpecificationPackage::ABSOLUTEPERIOD__PERIODLENGTH:
        return ::ecorecpp::mapping::set_traits<
                ::System_Specification::TimeType >::is_set(m_periodLength);

    }
    throw "Error";
}

void AbsolutePeriod::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AbsolutePeriod::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::System_Specification::System_SpecificationPackage_ptr > (::System_Specification::System_SpecificationPackage::_instance())->getAbsolutePeriod();
    return _eclass;
}

