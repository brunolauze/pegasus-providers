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


#include "UNIX_NextServiceAfterMeterProvider.h"

UNIX_NextServiceAfterMeterProvider::UNIX_NextServiceAfterMeterProvider()
{
}

UNIX_NextServiceAfterMeterProvider::~UNIX_NextServiceAfterMeterProvider()
{
}

CIMInstance UNIX_NextServiceAfterMeterProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_NextServiceAfterMeter &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_NextServiceAfterMeter"),
			constructKeyBindings(_p)));

	//CIM_NextServiceAfterMeter Properties
	if (_p.getPrecedingService(p)) inst.addProperty(p);
	if (_p.getFollowingService(p)) inst.addProperty(p);
	if (_p.getMeterResult(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_NextServiceAfterMeterProvider::constructKeyBindings(const UNIX_NextServiceAfterMeter& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_PRECEDING_SERVICE,
		_p.getPrecedingService(),
		CIMKeyBinding::REFERENCE));
	keys.append(CIMKeyBinding(
		PROPERTY_FOLLOWING_SERVICE,
		_p.getFollowingService(),
		CIMKeyBinding::REFERENCE));
	keys.append(CIMKeyBinding(
		PROPERTY_METER_RESULT,
		_p.getMeterResult(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_NextServiceAfterMeterProvider
#define UNIX_PROVIDER_NAME "UNIX_NextServiceAfterMeterProvider"
#define CLASS_IMPLEMENTATION UNIX_NextServiceAfterMeter
#define CLASS_IMPLEMENTATION_NAME "UNIX_NextServiceAfterMeter"
#define BASE_CLASS_NAME "CIM_NextServiceAfterMeter"
#define NUMKEYS_CLASS_IMPLEMENTATION 3


#include "UNIXProviderBase.hpp"

