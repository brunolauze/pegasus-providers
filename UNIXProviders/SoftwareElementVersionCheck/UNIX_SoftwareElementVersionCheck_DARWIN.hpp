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


UNIX_SoftwareElementVersionCheck::UNIX_SoftwareElementVersionCheck(void)
{
}

UNIX_SoftwareElementVersionCheck::~UNIX_SoftwareElementVersionCheck(void)
{
}


Boolean UNIX_SoftwareElementVersionCheck::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getCaption() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getDescription() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getElementName() const
{
	return String("SoftwareElementVersionCheck");
}

Boolean UNIX_SoftwareElementVersionCheck::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getName() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getVersion() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElementVersionCheck::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getCheckID() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_SoftwareElementVersionCheck::getCheckMode() const
{
	return Boolean(false);
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_NAME, getSoftwareElementName());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getSoftwareElementName() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getLowerSoftwareElementVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_SOFTWARE_ELEMENT_VERSION, getLowerSoftwareElementVersion());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getLowerSoftwareElementVersion() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getUpperSoftwareElementVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_SOFTWARE_ELEMENT_VERSION, getUpperSoftwareElementVersion());
	return true;
}

String UNIX_SoftwareElementVersionCheck::getUpperSoftwareElementVersion() const
{
	return String ("");
}

Boolean UNIX_SoftwareElementVersionCheck::getSoftwareElementStateDesired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE_DESIRED, getSoftwareElementStateDesired());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getSoftwareElementStateDesired() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElementVersionCheck::getTargetOperatingSystemDesired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM_DESIRED, getTargetOperatingSystemDesired());
	return true;
}

Uint16 UNIX_SoftwareElementVersionCheck::getTargetOperatingSystemDesired() const
{
	return Uint16(0);
}



Boolean UNIX_SoftwareElementVersionCheck::initialize()
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::finalize()
{
	return false;
}

Boolean UNIX_SoftwareElementVersionCheck::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String checkIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHECK_ID)) checkIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
