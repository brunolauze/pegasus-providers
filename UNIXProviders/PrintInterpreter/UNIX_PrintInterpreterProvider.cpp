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


#include "UNIX_PrintInterpreterProvider.h"

UNIX_PrintInterpreterProvider::UNIX_PrintInterpreterProvider()
{
}

UNIX_PrintInterpreterProvider::~UNIX_PrintInterpreterProvider()
{
}

CIMInstance UNIX_PrintInterpreterProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_PrintInterpreter &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_PrintInterpreter"),
			constructKeyBindings(_p)));

	if (_p.getLocalizedDescription(p)) inst.addProperty(p);
	if (_p.getLangType(p)) inst.addProperty(p);
	if (_p.getOtherLangTypeDescription(p)) inst.addProperty(p);
	if (_p.getLangLevel(p)) inst.addProperty(p);
	if (_p.getAddressabilityBasis(p)) inst.addProperty(p);
	if (_p.getFeedAddressability(p)) inst.addProperty(p);
	if (_p.getXFeedAddressability(p)) inst.addProperty(p);
	if (_p.getDefaultCharSetIn(p)) inst.addProperty(p);
	if (_p.getAvailabilityStatus(p)) inst.addProperty(p);
	if (_p.getOtherAvailabilityStatus(p)) inst.addProperty(p);
	if (_p.getNonCriticalAlertsPresent(p)) inst.addProperty(p);
	if (_p.getCriticalAlertsPresent(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_PrintInterpreterProvider::constructKeyBindings(const UNIX_PrintInterpreter& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_PrintInterpreterProvider
#define UNIX_PROVIDER_NAME "UNIX_PrintInterpreterProvider"
#define CLASS_IMPLEMENTATION UNIX_PrintInterpreter
#define CLASS_IMPLEMENTATION_NAME "UNIX_PrintInterpreter"
#define BASE_CLASS_NAME "CIM_PrintInterpreter"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

