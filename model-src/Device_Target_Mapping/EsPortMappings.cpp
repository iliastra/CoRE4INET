// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Device_Target_Mapping/EsPortMappings.cpp
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

#include "EsPortMappings.hpp"
#include <Device_Target_Mapping/PortMappings.hpp>
#include <ecore/EAnnotation.hpp>
#include <System_Specification/MetaInformation.hpp>
#include <Device_Target_Mapping/EsPortMapping.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "Device_Target_Mapping/Device_Target_MappingPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::Device_Target_Mapping;

// Default constructor
EsPortMappings::EsPortMappings()
{

    m_targetPortMapping.reset(new ::ecorecpp::mapping::ReferenceEListImpl<
            ::Device_Target_Mapping::EsPortMapping, -1, true, false >(this,
            NULL));

    /*PROTECTED REGION ID(EsPortMappingsImpl__EsPortMappingsImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

EsPortMappings::~EsPortMappings()
{
}

/*PROTECTED REGION ID(EsPortMappings.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

// References
::ecorecpp::mapping::EList< ::Device_Target_Mapping::EsPortMapping >& EsPortMappings::getTargetPortMapping()
{
    return *m_targetPortMapping;
}

