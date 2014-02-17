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


#include "UNIX_FibrePortProvider.h"

UNIX_FibrePortProvider::UNIX_FibrePortProvider()
{
}

UNIX_FibrePortProvider::~UNIX_FibrePortProvider()
{
}

CIMInstance UNIX_FibrePortProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FibrePort &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_FibrePort"),
			constructKeyBindings(_p)));

	if (_p.getAddressIdentifier(p)) inst.addProperty(p);
	if (_p.getSupportedPortTypes(p)) inst.addProperty(p);
	if (_p.getPortTypeVersions(p)) inst.addProperty(p);
	if (_p.getEnabledPortTypes(p)) inst.addProperty(p);
	if (_p.getEnabledVersions(p)) inst.addProperty(p);
	if (_p.getCurrentPortType(p)) inst.addProperty(p);
	if (_p.getCurrentVersion(p)) inst.addProperty(p);
	if (_p.getAliasAddresses(p)) inst.addProperty(p);
	if (_p.getLossOfSignalCounter(p)) inst.addProperty(p);
	if (_p.getLossOfSyncCounter(p)) inst.addProperty(p);
	if (_p.getCRCErrors(p)) inst.addProperty(p);
	if (_p.getInvalidTransmissionWords(p)) inst.addProperty(p);
	if (_p.getFramesTooShort(p)) inst.addProperty(p);
	if (_p.getFramesTooLong(p)) inst.addProperty(p);
	if (_p.getElasticityBufferUnderruns(p)) inst.addProperty(p);
	if (_p.getElasticityBufferOverruns(p)) inst.addProperty(p);
	if (_p.getReceiverTransmitterTimeout(p)) inst.addProperty(p);
	if (_p.getBypassedState(p)) inst.addProperty(p);
	if (_p.getConnectedMedia(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_FibrePortProvider::constructKeyBindings(const UNIX_FibrePort& _p)

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



#define UNIX_PROVIDER UNIX_FibrePortProvider
#define UNIX_PROVIDER_NAME "UNIX_FibrePortProvider"
#define CLASS_IMPLEMENTATION UNIX_FibrePort
#define CLASS_IMPLEMENTATION_NAME "UNIX_FibrePort"
#define BASE_CLASS_NAME "CIM_FibrePort"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

