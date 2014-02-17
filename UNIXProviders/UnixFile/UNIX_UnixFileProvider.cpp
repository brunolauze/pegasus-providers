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


#include "UNIX_UnixFileProvider.h"

UNIX_UnixFileProvider::UNIX_UnixFileProvider()
{
}

UNIX_UnixFileProvider::~UNIX_UnixFileProvider()
{
}

CIMInstance UNIX_UnixFileProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_UnixFile &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_UnixFile"),
			constructKeyBindings(_p)));

	if (_p.getCSCreationClassName(p)) inst.addProperty(p);
	if (_p.getCSName(p)) inst.addProperty(p);
	if (_p.getFSCreationClassName(p)) inst.addProperty(p);
	if (_p.getFSName(p)) inst.addProperty(p);
	if (_p.getLFCreationClassName(p)) inst.addProperty(p);
	if (_p.getLFName(p)) inst.addProperty(p);
	if (_p.getUserID(p)) inst.addProperty(p);
	if (_p.getGroupID(p)) inst.addProperty(p);
	if (_p.getSaveText(p)) inst.addProperty(p);
	if (_p.getLinkCount(p)) inst.addProperty(p);
	if (_p.getFileInodeNumber(p)) inst.addProperty(p);
	if (_p.getSetUid(p)) inst.addProperty(p);
	if (_p.getSetGid(p)) inst.addProperty(p);
	if (_p.getLastModifiedInode(p)) inst.addProperty(p);
	if (_p.getLinkMax(p)) inst.addProperty(p);
	if (_p.getNameMax(p)) inst.addProperty(p);
	if (_p.getPathMax(p)) inst.addProperty(p);
	if (_p.getPosixChownRestricted(p)) inst.addProperty(p);
	if (_p.getPosixNoTrunc(p)) inst.addProperty(p);
	if (_p.getPosixAsyncIo(p)) inst.addProperty(p);
	if (_p.getPosixPrioIo(p)) inst.addProperty(p);
	if (_p.getPosixSyncIo(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_UnixFileProvider::constructKeyBindings(const UNIX_UnixFile& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		String("CIM_UnixFile"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		String("CIM_UnixFile"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_FS_CREATION_CLASS_NAME,
		String("CIM_UnixFile"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_FS_NAME,
		String("CIM_UnixFile"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_L_F_CREATION_CLASS_NAME,
		String("CIM_UnixFile"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_L_F_NAME,
		String("CIM_UnixFile"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnixFileProvider
#define UNIX_PROVIDER_NAME "UNIX_UnixFileProvider"
#define CLASS_IMPLEMENTATION UNIX_UnixFile
#define CLASS_IMPLEMENTATION_NAME "UNIX_UnixFile"
#define BASE_CLASS_NAME "CIM_UnixFile"
#define NUMKEYS_CLASS_IMPLEMENTATION 6


#include "UNIXProviderBase.hpp"

