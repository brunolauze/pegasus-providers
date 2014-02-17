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


UNIX_SoftwareFeatureComponent::UNIX_SoftwareFeatureComponent(void)
{
}

UNIX_SoftwareFeatureComponent::~UNIX_SoftwareFeatureComponent(void)
{
}


Boolean UNIX_SoftwareFeatureComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_SoftwareFeatureComponent::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_SoftwareFeatureComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_SoftwareFeatureComponent::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_SoftwareFeatureComponent::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_BIOSFeature_Index = -1;
	endOf_UNIX_BIOSFeature_Group = false;
	group_UNIX_BIOSFeature_Component.initialize();
	group_UNIX_AGPSoftwareFeature_Index = -1;
	endOf_UNIX_AGPSoftwareFeature_Group = false;
	group_UNIX_AGPSoftwareFeature_Component.initialize();
	group_UNIX_VideoBIOSFeature_Index = -1;
	endOf_UNIX_VideoBIOSFeature_Group = false;
	group_UNIX_VideoBIOSFeature_Component.initialize();
	part_UNIX_BIOSFeature_Index = -1;
	endOf_UNIX_BIOSFeature_Part = false;
	part_UNIX_AGPSoftwareFeature_Index = -1;
	endOf_UNIX_AGPSoftwareFeature_Part = false;
	part_UNIX_VideoBIOSFeature_Index = -1;
	endOf_UNIX_VideoBIOSFeature_Part = false;
	return true;
}

Boolean UNIX_SoftwareFeatureComponent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_BIOSFeature_Part &&
			endOf_UNIX_AGPSoftwareFeature_Part &&
			endOf_UNIX_VideoBIOSFeature_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_BIOSFeature_Index++;
			endOf_UNIX_BIOSFeature_Group = !group_UNIX_BIOSFeature_Component.load(group_UNIX_BIOSFeature_Index);
			if (endOf_UNIX_BIOSFeature_Group)
			{
				endOf_UNIX_BIOSFeature_Part = false;
				part_UNIX_BIOSFeature_Component.setScope(CIMName("UNIX_BIOSFeature"));
				part_UNIX_BIOSFeature_Component.initialize();
				endOf_UNIX_AGPSoftwareFeature_Part = false;
				part_UNIX_AGPSoftwareFeature_Component.setScope(CIMName("UNIX_BIOSFeature"));
				part_UNIX_AGPSoftwareFeature_Component.initialize();
				endOf_UNIX_VideoBIOSFeature_Part = false;
				part_UNIX_VideoBIOSFeature_Component.setScope(CIMName("UNIX_BIOSFeature"));
				part_UNIX_VideoBIOSFeature_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_AGPSoftwareFeature_Index++;
			endOf_UNIX_AGPSoftwareFeature_Group = !group_UNIX_AGPSoftwareFeature_Component.load(group_UNIX_AGPSoftwareFeature_Index);
			if (endOf_UNIX_AGPSoftwareFeature_Group)
			{
				endOf_UNIX_BIOSFeature_Part = false;
				part_UNIX_BIOSFeature_Component.setScope(CIMName("UNIX_AGPSoftwareFeature"));
				part_UNIX_BIOSFeature_Component.initialize();
				endOf_UNIX_AGPSoftwareFeature_Part = false;
				part_UNIX_AGPSoftwareFeature_Component.setScope(CIMName("UNIX_AGPSoftwareFeature"));
				part_UNIX_AGPSoftwareFeature_Component.initialize();
				endOf_UNIX_VideoBIOSFeature_Part = false;
				part_UNIX_VideoBIOSFeature_Component.setScope(CIMName("UNIX_AGPSoftwareFeature"));
				part_UNIX_VideoBIOSFeature_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_VideoBIOSFeature_Index++;
			endOf_UNIX_VideoBIOSFeature_Group = !group_UNIX_VideoBIOSFeature_Component.load(group_UNIX_VideoBIOSFeature_Index);
			if (endOf_UNIX_VideoBIOSFeature_Group)
			{
				endOf_UNIX_BIOSFeature_Part = false;
				part_UNIX_BIOSFeature_Component.setScope(CIMName("UNIX_VideoBIOSFeature"));
				part_UNIX_BIOSFeature_Component.initialize();
				endOf_UNIX_AGPSoftwareFeature_Part = false;
				part_UNIX_AGPSoftwareFeature_Component.setScope(CIMName("UNIX_VideoBIOSFeature"));
				part_UNIX_AGPSoftwareFeature_Component.initialize();
				endOf_UNIX_VideoBIOSFeature_Part = false;
				part_UNIX_VideoBIOSFeature_Component.setScope(CIMName("UNIX_VideoBIOSFeature"));
				part_UNIX_VideoBIOSFeature_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_BIOSFeature_Index++;
	endOf_UNIX_BIOSFeature_Part = !part_UNIX_BIOSFeature_Component.load(part_UNIX_BIOSFeature_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_AGPSoftwareFeature_Index++;
	endOf_UNIX_AGPSoftwareFeature_Part = !part_UNIX_AGPSoftwareFeature_Component.load(part_UNIX_AGPSoftwareFeature_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_VideoBIOSFeature_Index++;
	endOf_UNIX_VideoBIOSFeature_Part = !part_UNIX_VideoBIOSFeature_Component.load(part_UNIX_VideoBIOSFeature_Index);
	}
	if (partIndex == 0 && endOf_UNIX_BIOSFeature_Part)
	{
		part_UNIX_BIOSFeature_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_AGPSoftwareFeature_Part)
	{
		part_UNIX_AGPSoftwareFeature_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_VideoBIOSFeature_Part)
	{
		part_UNIX_VideoBIOSFeature_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_BIOSFeature_Group &&
		endOf_UNIX_AGPSoftwareFeature_Group &&
		endOf_UNIX_VideoBIOSFeature_Group &&
		endOf_UNIX_BIOSFeature_Part &&
		endOf_UNIX_AGPSoftwareFeature_Part &&
		endOf_UNIX_VideoBIOSFeature_Part)		return false;
	return true;
}

Boolean UNIX_SoftwareFeatureComponent::finalize()
{
	group_UNIX_BIOSFeature_Component.finalize();
	group_UNIX_AGPSoftwareFeature_Component.finalize();
	group_UNIX_VideoBIOSFeature_Component.finalize();
	part_UNIX_BIOSFeature_Component.finalize();
	part_UNIX_AGPSoftwareFeature_Component.finalize();
	part_UNIX_VideoBIOSFeature_Component.finalize();
	return true;
}

Boolean UNIX_SoftwareFeatureComponent::find(Array<CIMKeyBinding> &kbArray)
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
