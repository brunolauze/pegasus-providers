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


#include "UNIX_UnimodemProvider.h"

UNIX_UnimodemProvider::UNIX_UnimodemProvider()
{
}

UNIX_UnimodemProvider::~UNIX_UnimodemProvider()
{
}

CIMInstance UNIX_UnimodemProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Unimodem &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_Unimodem"),
			constructKeyBindings(_p)));

	if (_p.getCallSetupResultCode(p)) inst.addProperty(p);
	if (_p.getMultiMediaMode(p)) inst.addProperty(p);
	if (_p.getDTEDCEInterfaceMode(p)) inst.addProperty(p);
	if (_p.getTransmitCarrierNegotiation(p)) inst.addProperty(p);
	if (_p.getReceiveCarrierNegotiation(p)) inst.addProperty(p);
	if (_p.getInitialTransmitCarrierDataRate(p)) inst.addProperty(p);
	if (_p.getInitialReceiveCarrierDataRate(p)) inst.addProperty(p);
	if (_p.getCarrierRetrainsRequested(p)) inst.addProperty(p);
	if (_p.getCarrierRetrainsGranted(p)) inst.addProperty(p);
	if (_p.getFinalTransmitCarrierDataRate(p)) inst.addProperty(p);
	if (_p.getFinalReceiveCarrierDataRate(p)) inst.addProperty(p);
	if (_p.getTerminationCause(p)) inst.addProperty(p);
	if (_p.getUnimodemRevision(p)) inst.addProperty(p);
	if (_p.getEstimatedNoiseLevel(p)) inst.addProperty(p);
	if (_p.getNormalizedMeanSquaredError(p)) inst.addProperty(p);
	if (_p.getTemporaryCarrierLossEventCount(p)) inst.addProperty(p);
	if (_p.getCarrierRenegotiationEventCount(p)) inst.addProperty(p);
	if (_p.getErrorControlFrameSize(p)) inst.addProperty(p);
	if (_p.getErrorControlLinkTimeouts(p)) inst.addProperty(p);
	if (_p.getErrorControlLinkNAKs(p)) inst.addProperty(p);
	if (_p.getTransmitFlowControl(p)) inst.addProperty(p);
	if (_p.getReceiveFlowControl(p)) inst.addProperty(p);
	if (_p.getTransmitCharsSentFromDTE(p)) inst.addProperty(p);
	if (_p.getReceiveCharsSentToDTE(p)) inst.addProperty(p);
	if (_p.getTransmitCharsLost(p)) inst.addProperty(p);
	if (_p.getReceiveCharsLost(p)) inst.addProperty(p);
	if (_p.getTransmitIFrameCount(p)) inst.addProperty(p);
	if (_p.getReceiveIFrameCount(p)) inst.addProperty(p);
	if (_p.getTransmitIFrameErrorCount(p)) inst.addProperty(p);
	if (_p.getReceivedIFrameErrorCount(p)) inst.addProperty(p);
	if (_p.getCallWaitingEventCount(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_UnimodemProvider::constructKeyBindings(const UNIX_Unimodem& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		String("CIM_Unimodem"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		String("CIM_Unimodem"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_Unimodem"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		String("CIM_Unimodem"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnimodemProvider
#define UNIX_PROVIDER_NAME "UNIX_UnimodemProvider"
#define CLASS_IMPLEMENTATION UNIX_Unimodem
#define CLASS_IMPLEMENTATION_NAME "UNIX_Unimodem"
#define BASE_CLASS_NAME "CIM_Unimodem"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

