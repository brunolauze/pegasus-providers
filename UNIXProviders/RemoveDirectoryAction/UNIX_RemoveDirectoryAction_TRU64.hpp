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


UNIX_RemoveDirectoryAction::UNIX_RemoveDirectoryAction(void)
{
}

UNIX_RemoveDirectoryAction::~UNIX_RemoveDirectoryAction(void)
{
}


Boolean UNIX_RemoveDirectoryAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemoveDirectoryAction::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemoveDirectoryAction::getCaption() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemoveDirectoryAction::getDescription() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemoveDirectoryAction::getElementName() const
{
	return String("RemoveDirectoryAction");
}

Boolean UNIX_RemoveDirectoryAction::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_RemoveDirectoryAction::getName() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_RemoveDirectoryAction::getVersion() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_RemoveDirectoryAction::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_RemoveDirectoryAction::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_RemoveDirectoryAction::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_RemoveDirectoryAction::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_RemoveDirectoryAction::getActionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ID, getActionID());
	return true;
}

String UNIX_RemoveDirectoryAction::getActionID() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTION, getDirection());
	return true;
}

Uint16 UNIX_RemoveDirectoryAction::getDirection() const
{
	return Uint16(0);
}

Boolean UNIX_RemoveDirectoryAction::getDirectoryName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTORY_NAME, getDirectoryName());
	return true;
}

String UNIX_RemoveDirectoryAction::getDirectoryName() const
{
	return String ("");
}

Boolean UNIX_RemoveDirectoryAction::getMustBeEmpty(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MUST_BE_EMPTY, getMustBeEmpty());
	return true;
}

Boolean UNIX_RemoveDirectoryAction::getMustBeEmpty() const
{
	return Boolean(false);
}



Boolean UNIX_RemoveDirectoryAction::initialize()
{
	return false;
}

Boolean UNIX_RemoveDirectoryAction::load(int &pIndex)
{
	return false;
}

Boolean UNIX_RemoveDirectoryAction::finalize()
{
	return false;
}

Boolean UNIX_RemoveDirectoryAction::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String actionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ACTION_ID)) actionIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
