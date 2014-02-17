//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////


#include "UNIX_SlotProvider.h"

UNIX_SlotProvider::UNIX_SlotProvider()
{
}

UNIX_SlotProvider::~UNIX_SlotProvider()
{
}

CIMInstance UNIX_SlotProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Slot &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_Slot"),
			constructKeyBindings(_p)));

	if (_p.getConnectorType(p)) inst.addProperty(p);
	if (_p.getPoweredOn(p)) inst.addProperty(p);
	if (_p.getSupportsHotPlug(p)) inst.addProperty(p);
	if (_p.getHeightAllowed(p)) inst.addProperty(p);
	if (_p.getLengthAllowed(p)) inst.addProperty(p);
	if (_p.getMaxDataWidth(p)) inst.addProperty(p);
	if (_p.getVccMixedVoltageSupport(p)) inst.addProperty(p);
	if (_p.getVppMixedVoltageSupport(p)) inst.addProperty(p);
	if (_p.getThermalRating(p)) inst.addProperty(p);
	if (_p.getSpecialPurpose(p)) inst.addProperty(p);
	if (_p.getPurposeDescription(p)) inst.addProperty(p);
	if (_p.getNumber(p)) inst.addProperty(p);
	if (_p.getPowered(p)) inst.addProperty(p);
	if (_p.getOpenSwitch(p)) inst.addProperty(p);
	if (_p.getMaxLinkWidth(p)) inst.addProperty(p);
	if (_p.getVendorCompatibilityStrings(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_SlotProvider::constructKeyBindings(const UNIX_Slot& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_TAG,
		String("CIM_Slot"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_Slot"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_SlotProvider
#define UNIX_PROVIDER_NAME "UNIX_SlotProvider"
#define CLASS_IMPLEMENTATION UNIX_Slot
#define CLASS_IMPLEMENTATION_NAME "UNIX_Slot"
#define BASE_CLASS_NAME "CIM_Slot"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

