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

#ifndef __UNIX_INSTALLEDOS_H
#define __UNIX_INSTALLEDOS_H


#include "CIM_SystemComponent.h"
#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
#include <Cluster/UNIX_ClusterProvider.h>
#include <OperatingSystem/UNIX_OperatingSystemProvider.h>

#include "UNIX_InstalledOSDeps.h"


#define PROPERTY_PRIMARY_OS				"PrimaryOS"


class UNIX_InstalledOS :
	public CIM_SystemComponent
{
public:

	UNIX_InstalledOS();
	~UNIX_InstalledOS();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual Boolean getPrimaryOS(CIMProperty&) const;
	virtual Boolean getPrimaryOS() const;

private:
	CIMName currentScope;

#	include "UNIX_InstalledOSPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_VirtualComputerSystem group_UNIX_VirtualComputerSystem_Component;
	UNIX_VirtualComputerSystemProvider group_UNIX_VirtualComputerSystem_ComponentProvider;
	int group_UNIX_VirtualComputerSystem_Index;
	bool endOf_UNIX_VirtualComputerSystem_Group;
	UNIX_ComputerSystem group_UNIX_ComputerSystem_Component;
	UNIX_ComputerSystemProvider group_UNIX_ComputerSystem_ComponentProvider;
	int group_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Group;
	UNIX_Cluster group_UNIX_Cluster_Component;
	UNIX_ClusterProvider group_UNIX_Cluster_ComponentProvider;
	int group_UNIX_Cluster_Index;
	bool endOf_UNIX_Cluster_Group;
	UNIX_OperatingSystem part_UNIX_OperatingSystem_Component;
	UNIX_OperatingSystemProvider part_UNIX_OperatingSystem_ComponentProvider;
	int part_UNIX_OperatingSystem_Index;
	bool endOf_UNIX_OperatingSystem_Part;


};

#endif /* UNIX_INSTALLEDOS */
