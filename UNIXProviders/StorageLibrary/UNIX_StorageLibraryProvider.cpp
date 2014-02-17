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


#include "UNIX_StorageLibraryProvider.h"

UNIX_StorageLibraryProvider::UNIX_StorageLibraryProvider()
{
}

UNIX_StorageLibraryProvider::~UNIX_StorageLibraryProvider()
{
}

CIMInstance UNIX_StorageLibraryProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageLibrary &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_StorageLibrary"),
			constructKeyBindings(_p)));

	if (_p.getCapabilities(p)) inst.addProperty(p);
	if (_p.getOverfilled(p)) inst.addProperty(p);
	if (_p.getAuditNeeded(p)) inst.addProperty(p);
	if (_p.getAuditInProgress(p)) inst.addProperty(p);
	if (_p.getMaxAuditTime(p)) inst.addProperty(p);
	if (_p.getAutomated(p)) inst.addProperty(p);
	if (_p.getRoboticsEnabled(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_StorageLibraryProvider::constructKeyBindings(const UNIX_StorageLibrary& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_StorageLibrary"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		String("CIM_StorageLibrary"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_StorageLibraryProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageLibraryProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageLibrary
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageLibrary"
#define BASE_CLASS_NAME "CIM_StorageLibrary"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

