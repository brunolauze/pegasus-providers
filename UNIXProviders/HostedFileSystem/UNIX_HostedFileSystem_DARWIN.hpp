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


UNIX_HostedFileSystem::UNIX_HostedFileSystem(void)
{
}

UNIX_HostedFileSystem::~UNIX_HostedFileSystem(void)
{
}


Boolean UNIX_HostedFileSystem::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_HostedFileSystem::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_HostedFileSystem::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_HostedFileSystem::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_HostedFileSystem::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_ComputerSystem_Index = -1;
	endOf_UNIX_ComputerSystem_Group = false;
	group_UNIX_ComputerSystem_Component.initialize();
	part_UNIX_RemoteFileSystem_Index = -1;
	endOf_UNIX_RemoteFileSystem_Part = false;
	part_UNIX_NFS_Index = -1;
	endOf_UNIX_NFS_Part = false;
	part_UNIX_DatabaseStorageArea_Index = -1;
	endOf_UNIX_DatabaseStorageArea_Part = false;
	part_UNIX_LocalFileSystem_Index = -1;
	endOf_UNIX_LocalFileSystem_Part = false;
	part_UNIX_UnixLocalFileSystem_Index = -1;
	endOf_UNIX_UnixLocalFileSystem_Part = false;
	return true;
}

Boolean UNIX_HostedFileSystem::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_RemoteFileSystem_Part &&
			endOf_UNIX_NFS_Part &&
			endOf_UNIX_DatabaseStorageArea_Part &&
			endOf_UNIX_LocalFileSystem_Part &&
			endOf_UNIX_UnixLocalFileSystem_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_ComputerSystem_Index++;
			endOf_UNIX_ComputerSystem_Group = !group_UNIX_ComputerSystem_Component.load(group_UNIX_ComputerSystem_Index);
			if (endOf_UNIX_ComputerSystem_Group)
			{
				endOf_UNIX_RemoteFileSystem_Part = false;
				part_UNIX_RemoteFileSystem_Component.setScope(CIMName("UNIX_ComputerSystem"));
				part_UNIX_RemoteFileSystem_Component.initialize();
				endOf_UNIX_NFS_Part = false;
				part_UNIX_NFS_Component.setScope(CIMName("UNIX_ComputerSystem"));
				part_UNIX_NFS_Component.initialize();
				endOf_UNIX_DatabaseStorageArea_Part = false;
				part_UNIX_DatabaseStorageArea_Component.setScope(CIMName("UNIX_ComputerSystem"));
				part_UNIX_DatabaseStorageArea_Component.initialize();
				endOf_UNIX_LocalFileSystem_Part = false;
				part_UNIX_LocalFileSystem_Component.setScope(CIMName("UNIX_ComputerSystem"));
				part_UNIX_LocalFileSystem_Component.initialize();
				endOf_UNIX_UnixLocalFileSystem_Part = false;
				part_UNIX_UnixLocalFileSystem_Component.setScope(CIMName("UNIX_ComputerSystem"));
				part_UNIX_UnixLocalFileSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_RemoteFileSystem_Index++;
	endOf_UNIX_RemoteFileSystem_Part = !part_UNIX_RemoteFileSystem_Component.load(part_UNIX_RemoteFileSystem_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_NFS_Index++;
	endOf_UNIX_NFS_Part = !part_UNIX_NFS_Component.load(part_UNIX_NFS_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_DatabaseStorageArea_Index++;
	endOf_UNIX_DatabaseStorageArea_Part = !part_UNIX_DatabaseStorageArea_Component.load(part_UNIX_DatabaseStorageArea_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_LocalFileSystem_Index++;
	endOf_UNIX_LocalFileSystem_Part = !part_UNIX_LocalFileSystem_Component.load(part_UNIX_LocalFileSystem_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_UnixLocalFileSystem_Index++;
	endOf_UNIX_UnixLocalFileSystem_Part = !part_UNIX_UnixLocalFileSystem_Component.load(part_UNIX_UnixLocalFileSystem_Index);
	}
	if (partIndex == 0 && endOf_UNIX_RemoteFileSystem_Part)
	{
		part_UNIX_RemoteFileSystem_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_NFS_Part)
	{
		part_UNIX_NFS_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_DatabaseStorageArea_Part)
	{
		part_UNIX_DatabaseStorageArea_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_LocalFileSystem_Part)
	{
		part_UNIX_LocalFileSystem_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_UnixLocalFileSystem_Part)
	{
		part_UNIX_UnixLocalFileSystem_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_ComputerSystem_Group &&
		endOf_UNIX_RemoteFileSystem_Part &&
		endOf_UNIX_NFS_Part &&
		endOf_UNIX_DatabaseStorageArea_Part &&
		endOf_UNIX_LocalFileSystem_Part &&
		endOf_UNIX_UnixLocalFileSystem_Part)		return false;
	return true;
}

Boolean UNIX_HostedFileSystem::finalize()
{
	group_UNIX_ComputerSystem_Component.finalize();
	part_UNIX_RemoteFileSystem_Component.finalize();
	part_UNIX_NFS_Component.finalize();
	part_UNIX_DatabaseStorageArea_Component.finalize();
	part_UNIX_LocalFileSystem_Component.finalize();
	part_UNIX_UnixLocalFileSystem_Component.finalize();
	return true;
}

Boolean UNIX_HostedFileSystem::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}