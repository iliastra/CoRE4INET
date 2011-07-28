// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Device_Specification/Buffers.cpp
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

#include "Buffers.hpp"
#include <System_Specification/ModelElement.hpp>
#include <ecore/EAnnotation.hpp>
#include <Device_Specification/Buffer.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "Device_Specification/Device_SpecificationPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::Device_Specification;

// Default constructor
Buffers::Buffers()
{

    m_buffer.reset(new ::ecorecpp::mapping::ReferenceEListImpl<
            ::Device_Specification::Buffer, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(BuffersImpl__BuffersImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

Buffers::~Buffers()
{
}

/*PROTECTED REGION ID(Buffers.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes

// References
::ecorecpp::mapping::EList< ::Device_Specification::Buffer >& Buffers::getBuffer()
{
    return *m_buffer;
}

