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


#include "UNIX_OSPFLinkProvider.h"

UNIX_OSPFLinkProvider::UNIX_OSPFLinkProvider()
{
}

UNIX_OSPFLinkProvider::~UNIX_OSPFLinkProvider()
{
}

CIMInstance UNIX_OSPFLinkProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_OSPFLink &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_OSPFLink"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Collection Properties

	//CIM_SystemSpecificCollection Properties

	//CIM_ConnectivityCollection Properties
	if (_p.getConnectivityStatus(p)) inst.addProperty(p);

	//CIM_OSPFLink Properties
	if (_p.getLinkType(p)) inst.addProperty(p);
	if (_p.getHelloInterval(p)) inst.addProperty(p);
	if (_p.getRouterDeadInterval(p)) inst.addProperty(p);
	if (_p.getMulticastForwarding(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_OSPFLinkProvider::constructKeyBindings(const UNIX_OSPFLink& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_OSPFLinkProvider
#define UNIX_PROVIDER_NAME "UNIX_OSPFLinkProvider"
#define CLASS_IMPLEMENTATION UNIX_OSPFLink
#define CLASS_IMPLEMENTATION_NAME "UNIX_OSPFLink"
#define BASE_CLASS_NAME "CIM_OSPFLink"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"
