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


#include "UNIX_PowerSupplyProvider.h"

UNIX_PowerSupplyProvider::UNIX_PowerSupplyProvider()
{
}

UNIX_PowerSupplyProvider::~UNIX_PowerSupplyProvider()
{
}

CIMInstance UNIX_PowerSupplyProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_PowerSupply &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_PowerSupply"),
			constructKeyBindings(_p)));

	if (_p.getIsSwitchingSupply(p)) inst.addProperty(p);
	if (_p.getRange1InputVoltageLow(p)) inst.addProperty(p);
	if (_p.getRange1InputVoltageHigh(p)) inst.addProperty(p);
	if (_p.getRange1InputFrequencyLow(p)) inst.addProperty(p);
	if (_p.getRange1InputFrequencyHigh(p)) inst.addProperty(p);
	if (_p.getRange2InputVoltageLow(p)) inst.addProperty(p);
	if (_p.getRange2InputVoltageHigh(p)) inst.addProperty(p);
	if (_p.getRange2InputFrequencyLow(p)) inst.addProperty(p);
	if (_p.getRange2InputFrequencyHigh(p)) inst.addProperty(p);
	if (_p.getActiveInputVoltage(p)) inst.addProperty(p);
	if (_p.getTypeOfRangeSwitching(p)) inst.addProperty(p);
	if (_p.getTotalOutputPower(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_PowerSupplyProvider::constructKeyBindings(const UNIX_PowerSupply& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		_p.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		_p.getSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		_p.getDeviceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_PowerSupplyProvider
#define UNIX_PROVIDER_NAME "UNIX_PowerSupplyProvider"
#define CLASS_IMPLEMENTATION UNIX_PowerSupply
#define CLASS_IMPLEMENTATION_NAME "UNIX_PowerSupply"
#define BASE_CLASS_NAME "CIM_PowerSupply"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

