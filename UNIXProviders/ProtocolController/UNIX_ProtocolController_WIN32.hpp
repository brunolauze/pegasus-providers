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


UNIX_ProtocolController::UNIX_ProtocolController(void)
{
}

UNIX_ProtocolController::~UNIX_ProtocolController(void)
{
}


Boolean UNIX_ProtocolController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProtocolController::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProtocolController::getCaption() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProtocolController::getDescription() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProtocolController::getElementName() const
{
	return String("ProtocolController");
}

Boolean UNIX_ProtocolController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ProtocolController::getInstallDate() const
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

Boolean UNIX_ProtocolController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ProtocolController::getName() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ProtocolController::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ProtocolController::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ProtocolController::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ProtocolController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ProtocolController::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ProtocolController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ProtocolController::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ProtocolController::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ProtocolController::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ProtocolController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ProtocolController::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ProtocolController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ProtocolController::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ProtocolController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ProtocolController::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ProtocolController::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ProtocolController::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ProtocolController::getTimeOfLastStateChange() const
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

Boolean UNIX_ProtocolController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ProtocolController::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ProtocolController::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ProtocolController::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ProtocolController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ProtocolController::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ProtocolController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ProtocolController::getCreationClassName() const
{
	return String("UNIX_ProtocolController");
}

Boolean UNIX_ProtocolController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_ProtocolController::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ProtocolController::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ProtocolController::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_ProtocolController::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_ProtocolController::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_ProtocolController::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_ProtocolController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ProtocolController::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_ProtocolController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_ProtocolController::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ProtocolController::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_ProtocolController::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ProtocolController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_ProtocolController::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ProtocolController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ProtocolController::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_ProtocolController::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtocolController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_ProtocolController::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_ProtocolController::getMaxUnitsControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_CONTROLLED, getMaxUnitsControlled());
	return true;
}

Uint32 UNIX_ProtocolController::getMaxUnitsControlled() const
{
	return Uint32(0);
}



Boolean UNIX_ProtocolController::initialize()
{
	return false;
}

Boolean UNIX_ProtocolController::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ProtocolController::finalize()
{
	return false;
}

Boolean UNIX_ProtocolController::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
