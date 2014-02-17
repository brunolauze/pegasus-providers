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


UNIX_Chip::UNIX_Chip(void)
{
}

UNIX_Chip::~UNIX_Chip(void)
{
}


Boolean UNIX_Chip::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Chip::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Chip::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Chip::getCaption() const
{
	return String ("");
}

Boolean UNIX_Chip::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Chip::getDescription() const
{
	return String ("");
}

Boolean UNIX_Chip::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Chip::getElementName() const
{
	return String("Chip");
}

Boolean UNIX_Chip::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Chip::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Chip::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Chip::getName() const
{
	return String ("");
}

Boolean UNIX_Chip::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Chip::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Chip::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Chip::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Chip::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Chip::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Chip::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Chip::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Chip::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Chip::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Chip::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Chip::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Chip::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Chip::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Chip::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Chip::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Chip::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Chip::getTag() const
{
	return String ("");
}

Boolean UNIX_Chip::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Chip::getCreationClassName() const
{
	return String("UNIX_Chip");
}

Boolean UNIX_Chip::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Chip::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_Chip::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Chip::getModel() const
{
	return String ("");
}

Boolean UNIX_Chip::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Chip::getSKU() const
{
	return String ("");
}

Boolean UNIX_Chip::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Chip::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_Chip::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Chip::getVersion() const
{
	return String ("");
}

Boolean UNIX_Chip::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Chip::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_Chip::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Chip::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_Chip::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Chip::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_Chip::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Chip::getManufactureDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Chip::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Chip::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_Chip::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Chip::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_Chip::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Chip::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_Chip::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Chip::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_Chip::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Chip::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_Chip::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Chip::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_Chip::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Chip::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_Chip::getFormFactor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORM_FACTOR, getFormFactor());
	return true;
}

Uint16 UNIX_Chip::getFormFactor() const
{
	return Uint16(0);
}



Boolean UNIX_Chip::initialize()
{
	return false;
}

Boolean UNIX_Chip::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Chip::finalize()
{
	return false;
}

Boolean UNIX_Chip::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String tagKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
