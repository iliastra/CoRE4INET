// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Device_Targets/TargetDevicesImpl.cpp
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

#include "TargetDevices.hpp"
#include <Device_Targets/Device_TargetsPackage.hpp>
#include <System_Specification/ModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <Device_Targets/TargetDevice.hpp>
#include <System_Specification/MetaInformation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::Device_Targets;

/*PROTECTED REGION ID(TargetDevicesImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void TargetDevices::_initialize()
{
    // Supertypes
    ::System_Specification::ModelElement::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_targetDevice->size(); i++)
    {
        (*m_targetDevice)[i]->_initialize();
        (*m_targetDevice)[i]->_setEContainer(
                this,
                ::Device_Targets::Device_TargetsPackage::_instance()->getTargetDevices__targetDevice());
    }
    if (m_metaInformation)
    {
        m_metaInformation->_initialize();
        m_metaInformation->_setEContainer(
                this,
                ::Device_Targets::Device_TargetsPackage::_instance()->getTargetDevices__metaInformation());
    }

    /*PROTECTED REGION ID(TargetDevicesImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations


// EObject
::ecore::EJavaObject TargetDevices::eGet(::ecore::EInt _featureID,
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
    case ::Device_Targets::Device_TargetsPackage::TARGETDEVICES__TARGETDEVICE:
    {
        _any = m_targetDevice->asEListOf< ::ecore::EObject > ();
    }
        return _any;
    case ::Device_Targets::Device_TargetsPackage::TARGETDEVICES__METAINFORMATION:
    {
        _any = static_cast< ::ecore::EObject* > (m_metaInformation);
    }
        return _any;

    }
    throw "Error";
}

void TargetDevices::eSet(::ecore::EInt _featureID,
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
    case ::Device_Targets::Device_TargetsPackage::TARGETDEVICES__TARGETDEVICE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 =
                ::ecorecpp::mapping::any::any_cast<
                        ::ecorecpp::mapping::EList_ptr >(_newValue);
        ::Device_Targets::TargetDevices::getTargetDevice().clear();
        ::Device_Targets::TargetDevices::getTargetDevice().insert_all(*_t0);
    }
        return;
    case ::Device_Targets::Device_TargetsPackage::TARGETDEVICES__METAINFORMATION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast<
                ::ecore::EObject_ptr >(_newValue);
        ::System_Specification::MetaInformation_ptr
                _t1 =
                        dynamic_cast< ::System_Specification::MetaInformation_ptr > (_t0);
        ::Device_Targets::TargetDevices::setMetaInformation(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TargetDevices::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__EANNOTATIONS:
        return m_eAnnotations && m_eAnnotations->size();
    case ::System_Specification::System_SpecificationPackage::MODELELEMENT__SIGNATURE:
        return ::ecorecpp::mapping::set_traits< ::ecore::EString >::is_set(
                m_signature);
    case ::Device_Targets::Device_TargetsPackage::TARGETDEVICES__TARGETDEVICE:
        return m_targetDevice && m_targetDevice->size();
    case ::Device_Targets::Device_TargetsPackage::TARGETDEVICES__METAINFORMATION:
        return m_metaInformation;

    }
    throw "Error";
}

void TargetDevices::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TargetDevices::_eClass()
{
    static ::ecore::EClass_ptr
            _eclass =
                    dynamic_cast< ::Device_Targets::Device_TargetsPackage_ptr > (::Device_Targets::Device_TargetsPackage::_instance())->getTargetDevices();
    return _eclass;
}

