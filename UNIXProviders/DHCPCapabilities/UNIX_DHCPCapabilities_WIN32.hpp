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


UNIX_DHCPCapabilities::UNIX_DHCPCapabilities(void)
{
}

UNIX_DHCPCapabilities::~UNIX_DHCPCapabilities(void)
{
}


Boolean UNIX_DHCPCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DHCPCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DHCPCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DHCPCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_DHCPCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DHCPCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_DHCPCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DHCPCapabilities::getElementName() const
{
	return String("DHCPCapabilities");
}

Boolean UNIX_DHCPCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_DHCPCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_DHCPCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_DHCPCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DHCPCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_DHCPCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_DHCPCapabilities::getOptionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPTIONS_SUPPORTED, getOptionsSupported());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getOptionsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DHCPCapabilities::getIPv6OptionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_OPTIONS_SUPPORTED, getIPv6OptionsSupported());
	return true;
}

Array<Uint16> UNIX_DHCPCapabilities::getIPv6OptionsSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_DHCPCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DHCPCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DHCPCapabilities::finalize()
{
	return false;
}

Boolean UNIX_DHCPCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
