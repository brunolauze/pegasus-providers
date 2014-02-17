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


#include "UNIX_FilterEntryProvider.h"

UNIX_FilterEntryProvider::UNIX_FilterEntryProvider()
{
}

UNIX_FilterEntryProvider::~UNIX_FilterEntryProvider()
{
}

CIMInstance UNIX_FilterEntryProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FilterEntry &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_FilterEntry"),
			constructKeyBindings(_p)));

	if (_p.getTrafficType(p)) inst.addProperty(p);
	if (_p.getOtherTrafficType(p)) inst.addProperty(p);
	if (_p.getMatchConditionType(p)) inst.addProperty(p);
	if (_p.getOtherMatchConditionType(p)) inst.addProperty(p);
	if (_p.getMatchConditionValue(p)) inst.addProperty(p);
	if (_p.getAction(p)) inst.addProperty(p);
	if (_p.getDefaultFilter(p)) inst.addProperty(p);
	if (_p.getTrafficClass(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_FilterEntryProvider::constructKeyBindings(const UNIX_FilterEntry& _p)

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
		PROPERTY_NAME,
		_p.getName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_FilterEntryProvider
#define UNIX_PROVIDER_NAME "UNIX_FilterEntryProvider"
#define CLASS_IMPLEMENTATION UNIX_FilterEntry
#define CLASS_IMPLEMENTATION_NAME "UNIX_FilterEntry"
#define BASE_CLASS_NAME "CIM_FilterEntry"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

