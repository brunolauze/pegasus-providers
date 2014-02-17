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


UNIX_PCIeSwitch::UNIX_PCIeSwitch(void)
{
}

UNIX_PCIeSwitch::~UNIX_PCIeSwitch(void)
{
}


Boolean UNIX_PCIeSwitch::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PCIeSwitch::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PCIeSwitch::getCaption() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PCIeSwitch::getDescription() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PCIeSwitch::getElementName() const
{
	return String("PCIeSwitch");
}

Boolean UNIX_PCIeSwitch::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PCIeSwitch::getInstallDate() const
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

Boolean UNIX_PCIeSwitch::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PCIeSwitch::getName() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PCIeSwitch::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PCIeSwitch::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PCIeSwitch::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PCIeSwitch::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PCIeSwitch::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PCIeSwitch::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PCIeSwitch::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PCIeSwitch::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PCIeSwitch::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PCIeSwitch::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PCIeSwitch::getTimeOfLastStateChange() const
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

Boolean UNIX_PCIeSwitch::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PCIeSwitch::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PCIeSwitch::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PCIeSwitch::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PCIeSwitch::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PCIeSwitch::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PCIeSwitch::getCreationClassName() const
{
	return String("UNIX_PCIeSwitch");
}

Boolean UNIX_PCIeSwitch::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PCIeSwitch::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PCIeSwitch::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PCIeSwitch::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PCIeSwitch::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PCIeSwitch::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PCIeSwitch::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_PCIeSwitch::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PCIeSwitch::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PCIeSwitch::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_PCIeSwitch::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PCIeSwitch::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PCIeSwitch::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PCIeSwitch::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PCIeSwitch::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PCIeSwitch::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PCIeSwitch::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PCIeSwitch::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_PCIeSwitch::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_PCIeSwitch::getTimeOfLastReset() const
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

Boolean UNIX_PCIeSwitch::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_PCIeSwitch::getProtocolSupported() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_PCIeSwitch::getMaxNumberControlled() const
{
	return Uint32(0);
}

Boolean UNIX_PCIeSwitch::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_PCIeSwitch::getProtocolDescription() const
{
	return String ("");
}

Boolean UNIX_PCIeSwitch::getCommandRegister(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_REGISTER, getCommandRegister());
	return true;
}

Uint16 UNIX_PCIeSwitch::getCommandRegister() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIeSwitch::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_PCIeSwitch::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getDeviceSelectTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_SELECT_TIMING, getDeviceSelectTiming());
	return true;
}

Uint16 UNIX_PCIeSwitch::getDeviceSelectTiming() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_PCIeSwitch::getClassCode() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getCacheLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_LINE_SIZE, getCacheLineSize());
	return true;
}

Uint8 UNIX_PCIeSwitch::getCacheLineSize() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getLatencyTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATENCY_TIMER, getLatencyTimer());
	return true;
}

Uint8 UNIX_PCIeSwitch::getLatencyTimer() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getInterruptPin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERRUPT_PIN, getInterruptPin());
	return true;
}

Uint16 UNIX_PCIeSwitch::getInterruptPin() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getExpansionROMBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS, getExpansionROMBaseAddress());
	return true;
}

Uint32 UNIX_PCIeSwitch::getExpansionROMBaseAddress() const
{
	return Uint32(0);
}

Boolean UNIX_PCIeSwitch::getSelfTestEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELF_TEST_ENABLED, getSelfTestEnabled());
	return true;
}

Boolean UNIX_PCIeSwitch::getSelfTestEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_PCIeSwitch::getBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_ADDRESS, getBaseAddress());
	return true;
}

Array<Uint32> UNIX_PCIeSwitch::getBaseAddress() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_PCIeSwitch::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getSubsystemID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getSubsystemVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_VENDOR_ID, getSubsystemVendorID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getSubsystemVendorID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getMinGrantTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_GRANT_TIME, getMinGrantTime());
	return true;
}

Uint8 UNIX_PCIeSwitch::getMinGrantTime() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getMaxLatency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LATENCY, getMaxLatency());
	return true;
}

Uint8 UNIX_PCIeSwitch::getMaxLatency() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_NUMBER, getBusNumber());
	return true;
}

Uint8 UNIX_PCIeSwitch::getBusNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

Uint8 UNIX_PCIeSwitch::getDeviceNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getFunctionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTION_NUMBER, getFunctionNumber());
	return true;
}

Uint8 UNIX_PCIeSwitch::getFunctionNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getPCIDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_IDEVICE_ID, getPCIDeviceID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getPCIDeviceID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_PCIeSwitch::getVendorID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getRevisionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_ID, getRevisionID());
	return true;
}

Uint8 UNIX_PCIeSwitch::getRevisionID() const
{
	return Uint8(0);
}

Boolean UNIX_PCIeSwitch::getNumberOfPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PORTS, getNumberOfPorts());
	return true;
}

Uint16 UNIX_PCIeSwitch::getNumberOfPorts() const
{
	return Uint16(0);
}

Boolean UNIX_PCIeSwitch::getSecondaryBusNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_BUS_NUMBERS, getSecondaryBusNumbers());
	return true;
}

Array<Uint8> UNIX_PCIeSwitch::getSecondaryBusNumbers() const
{
	Array<Uint8> as;
	

	return as;

}



Boolean UNIX_PCIeSwitch::initialize()
{
	return false;
}

Boolean UNIX_PCIeSwitch::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PCIeSwitch::finalize()
{
	return false;
}

Boolean UNIX_PCIeSwitch::find(Array<CIMKeyBinding> &kbArray)
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
