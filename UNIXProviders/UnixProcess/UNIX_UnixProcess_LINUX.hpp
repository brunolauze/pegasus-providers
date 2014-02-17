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


UNIX_UnixProcess::UNIX_UnixProcess(void)
{
}

UNIX_UnixProcess::~UNIX_UnixProcess(void)
{
}


Boolean UNIX_UnixProcess::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnixProcess::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnixProcess::getCaption() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnixProcess::getDescription() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnixProcess::getElementName() const
{
	return String("UnixProcess");
}

Boolean UNIX_UnixProcess::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_UnixProcess::getInstallDate() const
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

Boolean UNIX_UnixProcess::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UnixProcess::getName() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_UnixProcess::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixProcess::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_UnixProcess::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_UnixProcess::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_UnixProcess::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_UnixProcess::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_UnixProcess::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_UnixProcess::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_UnixProcess::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixProcess::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_UnixProcess::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixProcess::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_UnixProcess::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_UnixProcess::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_UnixProcess::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_UnixProcess::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_UnixProcess::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_UnixProcess::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_UnixProcess::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_UnixProcess::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixProcess::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_UnixProcess::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_UnixProcess::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_UnixProcess::getTimeOfLastStateChange() const
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

Boolean UNIX_UnixProcess::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_UnixProcess::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixProcess::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_UnixProcess::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixProcess::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_UnixProcess::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_UnixProcess::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_UnixProcess::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_UnixProcess::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_UnixProcess::getOSCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_UnixProcess::getOSName() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_UnixProcess::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UnixProcess::getCreationClassName() const
{
	return String("UNIX_UnixProcess");
}

Boolean UNIX_UnixProcess::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_UnixProcess::getHandle() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_UnixProcess::getPriority() const
{
	return Uint32(0);
}

Boolean UNIX_UnixProcess::getExecutionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STATE, getExecutionState());
	return true;
}

Uint16 UNIX_UnixProcess::getExecutionState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixProcess::getOtherExecutionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_EXECUTION_DESCRIPTION, getOtherExecutionDescription());
	return true;
}

String UNIX_UnixProcess::getOtherExecutionDescription() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_UnixProcess::getCreationDate() const
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

Boolean UNIX_UnixProcess::getTerminationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TERMINATION_DATE, getTerminationDate());
	return true;
}

CIMDateTime UNIX_UnixProcess::getTerminationDate() const
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

Boolean UNIX_UnixProcess::getKernelModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KERNEL_MODE_TIME, getKernelModeTime());
	return true;
}

Uint64 UNIX_UnixProcess::getKernelModeTime() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcess::getUserModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_MODE_TIME, getUserModeTime());
	return true;
}

Uint64 UNIX_UnixProcess::getUserModeTime() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcess::getWorkingSetSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORKING_SET_SIZE, getWorkingSetSize());
	return true;
}

Uint64 UNIX_UnixProcess::getWorkingSetSize() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcess::getParentProcessID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT_PROCESS_ID, getParentProcessID());
	return true;
}

String UNIX_UnixProcess::getParentProcessID() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getRealUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_USER_ID, getRealUserID());
	return true;
}

Uint64 UNIX_UnixProcess::getRealUserID() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcess::getProcessGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_GROUP_ID, getProcessGroupID());
	return true;
}

Uint64 UNIX_UnixProcess::getProcessGroupID() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcess::getProcessSessionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_SESSION_ID, getProcessSessionID());
	return true;
}

Uint64 UNIX_UnixProcess::getProcessSessionID() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcess::getProcessTTY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_T_T_Y, getProcessTTY());
	return true;
}

String UNIX_UnixProcess::getProcessTTY() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getModulePath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULE_PATH, getModulePath());
	return true;
}

String UNIX_UnixProcess::getModulePath() const
{
	return String ("");
}

Boolean UNIX_UnixProcess::getParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETERS, getParameters());
	return true;
}

Array<String> UNIX_UnixProcess::getParameters() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_UnixProcess::getProcessNiceValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_NICE_VALUE, getProcessNiceValue());
	return true;
}

Uint32 UNIX_UnixProcess::getProcessNiceValue() const
{
	return Uint32(0);
}

Boolean UNIX_UnixProcess::getProcessWaitingForEvent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_WAITING_FOR_EVENT, getProcessWaitingForEvent());
	return true;
}

String UNIX_UnixProcess::getProcessWaitingForEvent() const
{
	return String ("");
}



Boolean UNIX_UnixProcess::initialize()
{
	return false;
}

Boolean UNIX_UnixProcess::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UnixProcess::finalize()
{
	return false;
}

Boolean UNIX_UnixProcess::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String creationClassNameKey;
	String handleKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_CREATION_CLASS_NAME)) oSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_NAME)) oSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
