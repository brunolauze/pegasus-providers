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


#include "UNIX_POTSModemProvider.h"

UNIX_POTSModemProvider::UNIX_POTSModemProvider()
{
}

UNIX_POTSModemProvider::~UNIX_POTSModemProvider()
{
}

CIMInstance UNIX_POTSModemProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_POTSModem &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_POTSModem"),
			constructKeyBindings(_p)));

	if (_p.getCapabilities(p)) inst.addProperty(p);
	if (_p.getCapabilityDescriptions(p)) inst.addProperty(p);
	if (_p.getEnabledCapabilities(p)) inst.addProperty(p);
	if (_p.getMaxBaudRateToSerialPort(p)) inst.addProperty(p);
	if (_p.getMaxBaudRateToPhone(p)) inst.addProperty(p);
	if (_p.getSupportsSynchronousConnect(p)) inst.addProperty(p);
	if (_p.getDialType(p)) inst.addProperty(p);
	if (_p.getInactivityTimeout(p)) inst.addProperty(p);
	if (_p.getSpeakerVolumeInfo(p)) inst.addProperty(p);
	if (_p.getCountriesSupported(p)) inst.addProperty(p);
	if (_p.getCountrySelected(p)) inst.addProperty(p);
	if (_p.getRingsBeforeAnswer(p)) inst.addProperty(p);
	if (_p.getMaxNumberOfPasswords(p)) inst.addProperty(p);
	if (_p.getCurrentPasswords(p)) inst.addProperty(p);
	if (_p.getSupportsCallback(p)) inst.addProperty(p);
	if (_p.getAnswerMode(p)) inst.addProperty(p);
	if (_p.getEqualization(p)) inst.addProperty(p);
	if (_p.getBlackListedNumbers(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_POTSModemProvider::constructKeyBindings(const UNIX_POTSModem& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		String("CIM_POTSModem"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		String("CIM_POTSModem"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_POTSModem"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		String("CIM_POTSModem"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_POTSModemProvider
#define UNIX_PROVIDER_NAME "UNIX_POTSModemProvider"
#define CLASS_IMPLEMENTATION UNIX_POTSModem
#define CLASS_IMPLEMENTATION_NAME "UNIX_POTSModem"
#define BASE_CLASS_NAME "CIM_POTSModem"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

