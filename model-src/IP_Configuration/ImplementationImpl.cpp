// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * IP_Configuration/ImplementationImpl.cpp
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

#include "Implementation.hpp"
#include <IP_Configuration/IP_ConfigurationPackage.hpp>
#include <System_Specification/NamedElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::IP_Configuration;

/*PROTECTED REGION ID(ImplementationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Implementation::_initialize()
{
    // Supertypes
    ::System_Specification::NamedElement::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_details->size(); i++)
    {
        (*m_details)[i]->_initialize();
        (*m_details)[i]->_setEContainer(
                this,
                ::IP_Configuration::IP_ConfigurationPackage::_instance()->getImplementation__details());
    }

    /*PROTECTED REGION ID(ImplementationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject Implementation::eGet(::ecore::EInt _featureID,
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
    case ::IP_Configuration::IP_ConfigurationPackage::IMPLEMENTATION__DESCRIPTION:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::toAny(_any,
                m_description);
    }
        return _any;
    case ::IP_Configuration::IP_ConfigurationPackage::IMPLEMENTATION__DETAILS:
    {
        _any = m_details->asEListOf< ::ecore::EObject > ();
    }
        return _any;

    }
    throw "Error";
}

void Implementation::eSet(::ecore::EInt _featureID,
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
    case ::IP_Configuration::IP_ConfigurationPackage::IMPLEMENTATION__DESCRIPTION:
    {
        ::ecorecpp::mapping::any_traits< ::ecore::EString >::fromAny(_newValue,
                m_description);
    }
        return;
    case ::IP_Configuration::IP_ConfigurationPackage::IMPLEMENTATION__DETAILS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::IP_Configuration::Implementation::getDetails().clear();
        ::IP_Configuration::Implementation::getDetails().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Implementation::eIsSet(::ecore::EInt _featureID)
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
    case ::IP_Configuration::IP_ConfigurationPackage::IMPLEMENTATION__DESCRIPTION:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_description);
    case ::IP_Configuration::IP_ConfigurationPackage::IMPLEMENTATION__DETAILS:
        return m_details && m_details->size();

    }
    throw "Error";
}

void Implementation::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Implementation::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::IP_Configuration::IP_ConfigurationPackage_ptr > (::IP_Configuration::IP_ConfigurationPackage::_instance())->getImplementation();
    return _eclass;
}

