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

#ifndef __UNIX_BGPPEERGROUP_H
#define __UNIX_BGPPEERGROUP_H


#include "CIM_CollectionOfMSEs.h"

#include "UNIX_BGPPeerGroupDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_NAME				"Name"
#define PROPERTY_CONNECT_RETRY_INTERVAL				"ConnectRetryInterval"
#define PROPERTY_HOLD_TIME_CONFIGURED				"HoldTimeConfigured"
#define PROPERTY_KEEP_ALIVE_CONFIGURED				"KeepAliveConfigured"
#define PROPERTY_MIN_A_S_ORIGINATION_INTERVAL				"MinASOriginationInterval"
#define PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL				"MinRouteAdvertisementInterval"


class UNIX_BGPPeerGroup :
	public CIM_CollectionOfMSEs
{
public:

	UNIX_BGPPeerGroup();
	~UNIX_BGPPeerGroup();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getCollectionID(CIMProperty&) const;
	virtual String getCollectionID() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getConnectRetryInterval(CIMProperty&) const;
	virtual Uint32 getConnectRetryInterval() const;
	virtual Boolean getHoldTimeConfigured(CIMProperty&) const;
	virtual Uint16 getHoldTimeConfigured() const;
	virtual Boolean getKeepAliveConfigured(CIMProperty&) const;
	virtual Uint16 getKeepAliveConfigured() const;
	virtual Boolean getMinASOriginationInterval(CIMProperty&) const;
	virtual Uint16 getMinASOriginationInterval() const;
	virtual Boolean getMinRouteAdvertisementInterval(CIMProperty&) const;
	virtual Uint16 getMinRouteAdvertisementInterval() const;

private:
	CIMName currentScope;

#	include "UNIX_BGPPeerGroupPrivate.h"


};

#endif /* UNIX_BGPPEERGROUP */
