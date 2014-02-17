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


#include "UNIX_UnixDirectoryProvider.h"

UNIX_UnixDirectoryProvider::UNIX_UnixDirectoryProvider()
{
}

UNIX_UnixDirectoryProvider::~UNIX_UnixDirectoryProvider()
{
}

CIMInstance UNIX_UnixDirectoryProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_UnixDirectory &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_UnixDirectory"),
			constructKeyBindings(_p)));

	if (_p.getFileSizeBits(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_UnixDirectoryProvider::constructKeyBindings(const UNIX_UnixDirectory& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		String("CIM_UnixDirectory"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		String("CIM_UnixDirectory"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_FS_CREATION_CLASS_NAME,
		String("CIM_UnixDirectory"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_FS_NAME,
		String("CIM_UnixDirectory"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_UnixDirectory"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		String("CIM_UnixDirectory"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnixDirectoryProvider
#define UNIX_PROVIDER_NAME "UNIX_UnixDirectoryProvider"
#define CLASS_IMPLEMENTATION UNIX_UnixDirectory
#define CLASS_IMPLEMENTATION_NAME "UNIX_UnixDirectory"
#define BASE_CLASS_NAME "CIM_UnixDirectory"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

