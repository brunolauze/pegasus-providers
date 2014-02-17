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


#include "UNIX_UnixProcessStatisticalInformationProvider.h"

UNIX_UnixProcessStatisticalInformationProvider::UNIX_UnixProcessStatisticalInformationProvider()
{
}

UNIX_UnixProcessStatisticalInformationProvider::~UNIX_UnixProcessStatisticalInformationProvider()
{
}

CIMInstance UNIX_UnixProcessStatisticalInformationProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_UnixProcessStatisticalInformation &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_UnixProcessStatisticalInformation"),
			constructKeyBindings(_p)));

	if (_p.getCSCreationClassName(p)) inst.addProperty(p);
	if (_p.getCSName(p)) inst.addProperty(p);
	if (_p.getOSCreationClassName(p)) inst.addProperty(p);
	if (_p.getOSName(p)) inst.addProperty(p);
	if (_p.getHandle(p)) inst.addProperty(p);
	if (_p.getProcessCreationClassName(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getCPUTime(p)) inst.addProperty(p);
	if (_p.getRealText(p)) inst.addProperty(p);
	if (_p.getRealData(p)) inst.addProperty(p);
	if (_p.getRealStack(p)) inst.addProperty(p);
	if (_p.getVirtualText(p)) inst.addProperty(p);
	if (_p.getVirtualData(p)) inst.addProperty(p);
	if (_p.getVirtualStack(p)) inst.addProperty(p);
	if (_p.getVirtualMemoryMappedFileSize(p)) inst.addProperty(p);
	if (_p.getVirtualSharedMemory(p)) inst.addProperty(p);
	if (_p.getCpuTimeDeadChildren(p)) inst.addProperty(p);
	if (_p.getSystemTimeDeadChildren(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_UnixProcessStatisticalInformationProvider::constructKeyBindings(const UNIX_UnixProcessStatisticalInformation& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_CREATION_CLASS_NAME,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_NAME,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_HANDLE,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PROCESS_CREATION_CLASS_NAME,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		String("CIM_UnixProcessStatisticalInformation"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnixProcessStatisticalInformationProvider
#define UNIX_PROVIDER_NAME "UNIX_UnixProcessStatisticalInformationProvider"
#define CLASS_IMPLEMENTATION UNIX_UnixProcessStatisticalInformation
#define CLASS_IMPLEMENTATION_NAME "UNIX_UnixProcessStatisticalInformation"
#define BASE_CLASS_NAME "CIM_UnixProcessStatisticalInformation"
#define NUMKEYS_CLASS_IMPLEMENTATION 7


#include "UNIXProviderBase.hpp"

