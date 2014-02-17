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


#include "UNIX_IKESAEndpointProvider.h"

UNIX_IKESAEndpointProvider::UNIX_IKESAEndpointProvider()
{
}

UNIX_IKESAEndpointProvider::~UNIX_IKESAEndpointProvider()
{
}

CIMInstance UNIX_IKESAEndpointProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_IKESAEndpoint &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_IKESAEndpoint"),
			constructKeyBindings(_p)));

	if (_p.getInitiatorCookie(p)) inst.addProperty(p);
	if (_p.getResponderCookie(p)) inst.addProperty(p);
	if (_p.getCipherAlgorithm(p)) inst.addProperty(p);
	if (_p.getOtherCipherAlgorithm(p)) inst.addProperty(p);
	if (_p.getHashAlgorithm(p)) inst.addProperty(p);
	if (_p.getOtherHashAlgorithm(p)) inst.addProperty(p);
	if (_p.getAuthenticationMethod(p)) inst.addProperty(p);
	if (_p.getOtherAuthenticationMethod(p)) inst.addProperty(p);
	if (_p.getGroupId(p)) inst.addProperty(p);
	if (_p.getVendorID(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_IKESAEndpointProvider::constructKeyBindings(const UNIX_IKESAEndpoint& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		String("CIM_IKESAEndpoint"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		String("CIM_IKESAEndpoint"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_IKESAEndpoint"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		String("CIM_IKESAEndpoint"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_IKESAEndpointProvider
#define UNIX_PROVIDER_NAME "UNIX_IKESAEndpointProvider"
#define CLASS_IMPLEMENTATION UNIX_IKESAEndpoint
#define CLASS_IMPLEMENTATION_NAME "UNIX_IKESAEndpoint"
#define BASE_CLASS_NAME "CIM_IKESAEndpoint"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

