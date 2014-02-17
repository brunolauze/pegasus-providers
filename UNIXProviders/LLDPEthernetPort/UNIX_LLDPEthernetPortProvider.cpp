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


#include "UNIX_LLDPEthernetPortProvider.h"

UNIX_LLDPEthernetPortProvider::UNIX_LLDPEthernetPortProvider()
{
}

UNIX_LLDPEthernetPortProvider::~UNIX_LLDPEthernetPortProvider()
{
}

CIMInstance UNIX_LLDPEthernetPortProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_LLDPEthernetPort &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_LLDPEthernetPort"),
			constructKeyBindings(_p)));

	if (_p.getConfigPortVlanTxEnable(p)) inst.addProperty(p);
	if (_p.getConfigManVidTxEnable(p)) inst.addProperty(p);
	if (_p.getMessageTxInterval(p)) inst.addProperty(p);
	if (_p.getMessageTxHoldMultiplier(p)) inst.addProperty(p);
	if (_p.getReinitDelay(p)) inst.addProperty(p);
	if (_p.getNotificationInterval(p)) inst.addProperty(p);
	if (_p.getTxCreditMax(p)) inst.addProperty(p);
	if (_p.getMessageFastTx(p)) inst.addProperty(p);
	if (_p.getTxFastInit(p)) inst.addProperty(p);
	if (_p.getDestMacAddress(p)) inst.addProperty(p);
	if (_p.getPortConfigAdminStatus(p)) inst.addProperty(p);
	if (_p.getPortConfigNotificationEnable(p)) inst.addProperty(p);
	if (_p.getPortConfigPortDescriptionTLVTxEnable(p)) inst.addProperty(p);
	if (_p.getPortConfigSystemNameTLVTxEnable(p)) inst.addProperty(p);
	if (_p.getPortConfigSystemDescriptionTLVTxEnable(p)) inst.addProperty(p);
	if (_p.getPortConfigSystemCapabilitiesTLVTxEnable(p)) inst.addProperty(p);
	if (_p.getManAddrConfigDestAddress(p)) inst.addProperty(p);
	if (_p.getManAddrConfigLocManAddrSubtype(p)) inst.addProperty(p);
	if (_p.getManAddrConfigLocManAddr(p)) inst.addProperty(p);
	if (_p.getManAddrConfigTxEnable(p)) inst.addProperty(p);
	if (_p.getLocChassisIdSubtype(p)) inst.addProperty(p);
	if (_p.getLocChassisId(p)) inst.addProperty(p);
	if (_p.getLocSysName(p)) inst.addProperty(p);
	if (_p.getLocSysDesc(p)) inst.addProperty(p);
	if (_p.getLocSysCapSupported(p)) inst.addProperty(p);
	if (_p.getLocSysCapEnabled(p)) inst.addProperty(p);
	if (_p.getLocPortIdSubtype(p)) inst.addProperty(p);
	if (_p.getLocPortID(p)) inst.addProperty(p);
	if (_p.getLocPortDesc(p)) inst.addProperty(p);
	if (_p.getLocTxSystemValue(p)) inst.addProperty(p);
	if (_p.getRemTxSystemValueEcho(p)) inst.addProperty(p);
	if (_p.getLocRxSystemValue(p)) inst.addProperty(p);
	if (_p.getRemRxSystemValueEcho(p)) inst.addProperty(p);
	if (_p.getLocFbSystemValue(p)) inst.addProperty(p);
	if (_p.getRemTxSystemValue(p)) inst.addProperty(p);
	if (_p.getLocTxSystemValueEcho(p)) inst.addProperty(p);
	if (_p.getRemRxSystemValue(p)) inst.addProperty(p);
	if (_p.getLocRxSystemValueEcho(p)) inst.addProperty(p);
	if (_p.getLocResolvedTxSystemValue(p)) inst.addProperty(p);
	if (_p.getLocResolvedRxSystemValue(p)) inst.addProperty(p);
	if (_p.getMaximumFrameSizeTLVEnabled(p)) inst.addProperty(p);
	if (_p.getLocManAddrSubType(p)) inst.addProperty(p);
	if (_p.getLocManAddr(p)) inst.addProperty(p);
	if (_p.getLocManAddrIfSubtype(p)) inst.addProperty(p);
	if (_p.getLocManAddrIfId(p)) inst.addProperty(p);
	if (_p.getRemLocalDestMacAddress(p)) inst.addProperty(p);
	if (_p.getRemManAddrSubType(p)) inst.addProperty(p);
	if (_p.getRemManAddr(p)) inst.addProperty(p);
	if (_p.getRemManAddrIfSubtype(p)) inst.addProperty(p);
	if (_p.getRemManAddrIfId(p)) inst.addProperty(p);
	if (_p.getRemChassisIdSubtype(p)) inst.addProperty(p);
	if (_p.getRemChassisId(p)) inst.addProperty(p);
	if (_p.getRemSysName(p)) inst.addProperty(p);
	if (_p.getRemSysDesc(p)) inst.addProperty(p);
	if (_p.getRemSysCapSupported(p)) inst.addProperty(p);
	if (_p.getRemSysCapEnabled(p)) inst.addProperty(p);
	if (_p.getRemPortIdSubtype(p)) inst.addProperty(p);
	if (_p.getRemPortID(p)) inst.addProperty(p);
	if (_p.getRemPortDesc(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_LLDPEthernetPortProvider::constructKeyBindings(const UNIX_LLDPEthernetPort& _p)

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
		PROPERTY_DEVICE_ID,
		_p.getDeviceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_LLDPEthernetPortProvider
#define UNIX_PROVIDER_NAME "UNIX_LLDPEthernetPortProvider"
#define CLASS_IMPLEMENTATION UNIX_LLDPEthernetPort
#define CLASS_IMPLEMENTATION_NAME "UNIX_LLDPEthernetPort"
#define BASE_CLASS_NAME "CIM_LLDPEthernetPort"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

