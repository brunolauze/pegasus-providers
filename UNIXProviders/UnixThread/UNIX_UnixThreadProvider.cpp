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


#include "UNIX_UnixThreadProvider.h"

UNIX_UnixThreadProvider::UNIX_UnixThreadProvider()
{
}

UNIX_UnixThreadProvider::~UNIX_UnixThreadProvider()
{
}

CIMInstance UNIX_UnixThreadProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_UnixThread &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_UnixThread"),
			constructKeyBindings(_p)));

	if (_p.getSchedPolicy(p)) inst.addProperty(p);
	if (_p.getOtherSchedPolicy(p)) inst.addProperty(p);
	if (_p.getGuardSize(p)) inst.addProperty(p);
	if (_p.getDetachState(p)) inst.addProperty(p);
	if (_p.getInheritSched(p)) inst.addProperty(p);
	if (_p.getContentionScope(p)) inst.addProperty(p);
	if (_p.getStackSize(p)) inst.addProperty(p);
	if (_p.getConcurrencyLevel(p)) inst.addProperty(p);
	if (_p.getCancelState(p)) inst.addProperty(p);
	if (_p.getCancelType(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_UnixThreadProvider::constructKeyBindings(const UNIX_UnixThread& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		_p.getCSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		_p.getCSName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_CREATION_CLASS_NAME,
		_p.getOSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_NAME,
		_p.getOSName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PROCESS_CREATION_CLASS_NAME,
		_p.getProcessCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PROCESS_HANDLE,
		_p.getProcessHandle(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_HANDLE,
		_p.getHandle(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnixThreadProvider
#define UNIX_PROVIDER_NAME "UNIX_UnixThreadProvider"
#define CLASS_IMPLEMENTATION UNIX_UnixThread
#define CLASS_IMPLEMENTATION_NAME "UNIX_UnixThread"
#define BASE_CLASS_NAME "CIM_UnixThread"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

