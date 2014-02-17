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


UNIX_AGPSoftwareFeature::UNIX_AGPSoftwareFeature(void)
{
}

UNIX_AGPSoftwareFeature::~UNIX_AGPSoftwareFeature(void)
{
}


Boolean UNIX_AGPSoftwareFeature::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AGPSoftwareFeature::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AGPSoftwareFeature::getCaption() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AGPSoftwareFeature::getDescription() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AGPSoftwareFeature::getElementName() const
{
	return String("AGPSoftwareFeature");
}

Boolean UNIX_AGPSoftwareFeature::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AGPSoftwareFeature::getInstallDate() const
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

Boolean UNIX_AGPSoftwareFeature::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AGPSoftwareFeature::getName() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AGPSoftwareFeature::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPSoftwareFeature::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AGPSoftwareFeature::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AGPSoftwareFeature::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AGPSoftwareFeature::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_AGPSoftwareFeature::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_AGPSoftwareFeature::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AGPSoftwareFeature::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AGPSoftwareFeature::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_AGPSoftwareFeature::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AGPSoftwareFeature::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_AGPSoftwareFeature::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_AGPSoftwareFeature::getIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_AGPSoftwareFeature::getProductName() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_AGPSoftwareFeature::getVendor() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_AGPSoftwareFeature::getVersion() const
{
	return String ("");
}

Boolean UNIX_AGPSoftwareFeature::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_AGPSoftwareFeature::getCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPSoftwareFeature::getCharacteristicDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC_DESCRIPTIONS, getCharacteristicDescriptions());
	return true;
}

Array<String> UNIX_AGPSoftwareFeature::getCharacteristicDescriptions() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_AGPSoftwareFeature::initialize()
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::finalize()
{
	return false;
}

Boolean UNIX_AGPSoftwareFeature::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String identifyingNumberKey;
	String productNameKey;
	String vendorKey;
	String versionKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_NAME)) productNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
