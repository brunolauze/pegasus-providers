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


#include "UNIX_BGPAttributesProvider.h"

UNIX_BGPAttributesProvider::UNIX_BGPAttributesProvider()
{
}

UNIX_BGPAttributesProvider::~UNIX_BGPAttributesProvider()
{
}

CIMInstance UNIX_BGPAttributesProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BGPAttributes &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_BGPAttributes"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_ManagedSystemElement Properties
	if (_p.getInstallDate(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getOperationalStatus(p)) inst.addProperty(p);
	if (_p.getStatusDescriptions(p)) inst.addProperty(p);
	if (_p.getStatus(p)) inst.addProperty(p);
	if (_p.getHealthState(p)) inst.addProperty(p);
	if (_p.getCommunicationStatus(p)) inst.addProperty(p);
	if (_p.getDetailedStatus(p)) inst.addProperty(p);
	if (_p.getOperatingStatus(p)) inst.addProperty(p);
	if (_p.getPrimaryStatus(p)) inst.addProperty(p);

	//CIM_LogicalElement Properties

	//CIM_BGPAttributes Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getVersion(p)) inst.addProperty(p);
	if (_p.getLocalPreference(p)) inst.addProperty(p);
	if (_p.getASPath(p)) inst.addProperty(p);
	if (_p.getAsSet(p)) inst.addProperty(p);
	if (_p.getNextHop(p)) inst.addProperty(p);
	if (_p.getNextHopSelf(p)) inst.addProperty(p);
	if (_p.getMED(p)) inst.addProperty(p);
	if (_p.getBGPCommunityValue(p)) inst.addProperty(p);
	if (_p.getAtomicAggregate(p)) inst.addProperty(p);
	if (_p.getAggregator(p)) inst.addProperty(p);
	if (_p.getOrigin(p)) inst.addProperty(p);
	if (_p.getOriginatorID(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_BGPAttributesProvider::constructKeyBindings(const UNIX_BGPAttributes& _p)

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
		PROPERTY_VERSION,
		_p.getVersion(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_BGPAttributesProvider
#define UNIX_PROVIDER_NAME "UNIX_BGPAttributesProvider"
#define CLASS_IMPLEMENTATION UNIX_BGPAttributes
#define CLASS_IMPLEMENTATION_NAME "UNIX_BGPAttributes"
#define BASE_CLASS_NAME "CIM_BGPAttributes"
#define NUMKEYS_CLASS_IMPLEMENTATION 3


#include "UNIXProviderBase.hpp"
