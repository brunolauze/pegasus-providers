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


#include "UNIX_WiFiEndpointSettingsProvider.h"

UNIX_WiFiEndpointSettingsProvider::UNIX_WiFiEndpointSettingsProvider()
{
}

UNIX_WiFiEndpointSettingsProvider::~UNIX_WiFiEndpointSettingsProvider()
{
}

CIMInstance UNIX_WiFiEndpointSettingsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_WiFiEndpointSettings &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_WiFiEndpointSettings"),
			constructKeyBindings(_p)));

	if (_p.getPriority(p)) inst.addProperty(p);
	if (_p.getSSID(p)) inst.addProperty(p);
	if (_p.getBSSType(p)) inst.addProperty(p);
	if (_p.getEncryptionMethod(p)) inst.addProperty(p);
	if (_p.getOtherEncryptionMethod(p)) inst.addProperty(p);
	if (_p.getAuthenticationMethod(p)) inst.addProperty(p);
	if (_p.getOtherAuthenticationMethod(p)) inst.addProperty(p);
	if (_p.getKeys(p)) inst.addProperty(p);
	if (_p.getKeyIndex(p)) inst.addProperty(p);
	if (_p.getPSKValue(p)) inst.addProperty(p);
	if (_p.getPSKPassPhrase(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_WiFiEndpointSettingsProvider::constructKeyBindings(const UNIX_WiFiEndpointSettings& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		String("CIM_WiFiEndpointSettings"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_WiFiEndpointSettingsProvider
#define UNIX_PROVIDER_NAME "UNIX_WiFiEndpointSettingsProvider"
#define CLASS_IMPLEMENTATION UNIX_WiFiEndpointSettings
#define CLASS_IMPLEMENTATION_NAME "UNIX_WiFiEndpointSettings"
#define BASE_CLASS_NAME "CIM_WiFiEndpointSettings"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

