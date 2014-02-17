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


#include "UNIX_SwitchPortSourceRoutingStatisticsProvider.h"

UNIX_SwitchPortSourceRoutingStatisticsProvider::UNIX_SwitchPortSourceRoutingStatisticsProvider()
{
}

UNIX_SwitchPortSourceRoutingStatisticsProvider::~UNIX_SwitchPortSourceRoutingStatisticsProvider()
{
}

CIMInstance UNIX_SwitchPortSourceRoutingStatisticsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_SwitchPortSourceRoutingStatistics &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_SwitchPortSourceRoutingStatistics"),
			constructKeyBindings(_p)));

	if (_p.getSpecInFrames(p)) inst.addProperty(p);
	if (_p.getSpecOutFrames(p)) inst.addProperty(p);
	if (_p.getApeInFrames(p)) inst.addProperty(p);
	if (_p.getApeOutFrames(p)) inst.addProperty(p);
	if (_p.getSteInFrames(p)) inst.addProperty(p);
	if (_p.getSteOutFrames(p)) inst.addProperty(p);
	if (_p.getSegmentMismatchDiscards(p)) inst.addProperty(p);
	if (_p.getDuplicateSegmentDiscards(p)) inst.addProperty(p);
	if (_p.getHopCountExceedsDiscards(p)) inst.addProperty(p);
	if (_p.getDupLanIdOrTreeErrors(p)) inst.addProperty(p);
	if (_p.getLanIdMismatches(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_SwitchPortSourceRoutingStatisticsProvider::constructKeyBindings(const UNIX_SwitchPortSourceRoutingStatistics& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		String("CIM_SwitchPortSourceRoutingStatistics"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		String("CIM_SwitchPortSourceRoutingStatistics"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_A_P_CREATION_CLASS_NAME,
		String("CIM_SwitchPortSourceRoutingStatistics"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_S_A_P_NAME,
		String("CIM_SwitchPortSourceRoutingStatistics"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_SwitchPortSourceRoutingStatistics"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		String("CIM_SwitchPortSourceRoutingStatistics"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_SwitchPortSourceRoutingStatisticsProvider
#define UNIX_PROVIDER_NAME "UNIX_SwitchPortSourceRoutingStatisticsProvider"
#define CLASS_IMPLEMENTATION UNIX_SwitchPortSourceRoutingStatistics
#define CLASS_IMPLEMENTATION_NAME "UNIX_SwitchPortSourceRoutingStatistics"
#define BASE_CLASS_NAME "CIM_SwitchPortSourceRoutingStatistics"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

