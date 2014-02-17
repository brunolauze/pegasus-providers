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


#include "UNIX_PrintJobProvider.h"

UNIX_PrintJobProvider::UNIX_PrintJobProvider()
{
}

UNIX_PrintJobProvider::~UNIX_PrintJobProvider()
{
}

CIMInstance UNIX_PrintJobProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_PrintJob &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_PrintJob"),
			constructKeyBindings(_p)));

	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getQueueCreationClassName(p)) inst.addProperty(p);
	if (_p.getQueueName(p)) inst.addProperty(p);
	if (_p.getJobStatus(p)) inst.addProperty(p);
	if (_p.getJobID(p)) inst.addProperty(p);
	if (_p.getSchedulingInformation(p)) inst.addProperty(p);
	if (_p.getJobSize(p)) inst.addProperty(p);
	if (_p.getLanguage(p)) inst.addProperty(p);
	if (_p.getMimeTypes(p)) inst.addProperty(p);
	if (_p.getRequiredPaperType(p)) inst.addProperty(p);
	if (_p.getFinishing(p)) inst.addProperty(p);
	if (_p.getCopies(p)) inst.addProperty(p);
	if (_p.getHorizontalResolution(p)) inst.addProperty(p);
	if (_p.getVerticalResolution(p)) inst.addProperty(p);
	if (_p.getCharSet(p)) inst.addProperty(p);
	if (_p.getNaturalLanguage(p)) inst.addProperty(p);
	if (_p.getNumberUp(p)) inst.addProperty(p);
	if (_p.getPrintJobStatus(p)) inst.addProperty(p);
	if (_p.getTimeCompleted(p)) inst.addProperty(p);
	if (_p.getRequiredJobSheets(p)) inst.addProperty(p);
	if (_p.getJobOrigination(p)) inst.addProperty(p);
	if (_p.getElapsedTime(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);
	if (_p.getStartTime(p)) inst.addProperty(p);
	if (_p.getTimeSubmitted(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_PrintJobProvider::constructKeyBindings(const UNIX_PrintJob& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		String("CIM_PrintJob"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		String("CIM_PrintJob"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_QUEUE_CREATION_CLASS_NAME,
		String("CIM_PrintJob"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_QUEUE_NAME,
		String("CIM_PrintJob"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_JOB_ID,
		String("CIM_PrintJob"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_PrintJobProvider
#define UNIX_PROVIDER_NAME "UNIX_PrintJobProvider"
#define CLASS_IMPLEMENTATION UNIX_PrintJob
#define CLASS_IMPLEMENTATION_NAME "UNIX_PrintJob"
#define BASE_CLASS_NAME "CIM_PrintJob"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

