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


UNIX_ExtendedStaticIPAssignmentSettingData::UNIX_ExtendedStaticIPAssignmentSettingData(void)
{
}

UNIX_ExtendedStaticIPAssignmentSettingData::~UNIX_ExtendedStaticIPAssignmentSettingData(void)
{
}


Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getElementName() const
{
	return String("ExtendedStaticIPAssignmentSettingData");
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ExtendedStaticIPAssignmentSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getAddressOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_ExtendedStaticIPAssignmentSettingData::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getIPAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_P_ADDRESSES, getIPAddresses());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getIPAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getIPv6SubnetPrefixLengths(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_SUBNET_PREFIX_LENGTHS, getIPv6SubnetPrefixLengths());
	return true;
}

Array<Uint16> UNIX_ExtendedStaticIPAssignmentSettingData::getIPv6SubnetPrefixLengths() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getSubnetMasks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASKS, getSubnetMasks());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getSubnetMasks() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::getGatewayAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_ADDRESSES, getGatewayAddresses());
	return true;
}

Array<String> UNIX_ExtendedStaticIPAssignmentSettingData::getGatewayAddresses() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_ExtendedStaticIPAssignmentSettingData::initialize()
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::finalize()
{
	return false;
}

Boolean UNIX_ExtendedStaticIPAssignmentSettingData::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
