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


UNIX_UnixThread::UNIX_UnixThread(void)
{
}

UNIX_UnixThread::~UNIX_UnixThread(void)
{
}


Boolean UNIX_UnixThread::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnixThread::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnixThread::getCaption() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnixThread::getDescription() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnixThread::getElementName() const
{
	return String("UnixThread");
}

Boolean UNIX_UnixThread::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_UnixThread::getInstallDate() const
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

Boolean UNIX_UnixThread::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UnixThread::getName() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_UnixThread::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixThread::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_UnixThread::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_UnixThread::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_UnixThread::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_UnixThread::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_UnixThread::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_UnixThread::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_UnixThread::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_UnixThread::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_UnixThread::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_UnixThread::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_UnixThread::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_UnixThread::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_UnixThread::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_UnixThread::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_UnixThread::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_UnixThread::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_UnixThread::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_UnixThread::getTimeOfLastStateChange() const
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

Boolean UNIX_UnixThread::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_UnixThread::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixThread::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_UnixThread::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_UnixThread::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_UnixThread::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_UnixThread::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_UnixThread::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_UnixThread::getOSCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_UnixThread::getOSName() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_UnixThread::getProcessCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_CREATION_CLASS_NAME, getProcessCreationClassName());
	return true;
}

String UNIX_UnixThread::getProcessCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getProcessHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_HANDLE, getProcessHandle());
	return true;
}

String UNIX_UnixThread::getProcessHandle() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UnixThread::getCreationClassName() const
{
	return String("UNIX_UnixThread");
}

Boolean UNIX_UnixThread::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_UnixThread::getHandle() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_UnixThread::getPriority() const
{
	return Uint32(0);
}

Boolean UNIX_UnixThread::getExecutionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STATE, getExecutionState());
	return true;
}

Uint16 UNIX_UnixThread::getExecutionState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getKernelModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KERNEL_MODE_TIME, getKernelModeTime());
	return true;
}

Uint64 UNIX_UnixThread::getKernelModeTime() const
{
	return Uint64(0);
}

Boolean UNIX_UnixThread::getUserModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_MODE_TIME, getUserModeTime());
	return true;
}

Uint64 UNIX_UnixThread::getUserModeTime() const
{
	return Uint64(0);
}

Boolean UNIX_UnixThread::getSchedPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHED_POLICY, getSchedPolicy());
	return true;
}

Uint16 UNIX_UnixThread::getSchedPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getOtherSchedPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHED_POLICY, getOtherSchedPolicy());
	return true;
}

String UNIX_UnixThread::getOtherSchedPolicy() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getGuardSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GUARD_SIZE, getGuardSize());
	return true;
}

String UNIX_UnixThread::getGuardSize() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getDetachState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETACH_STATE, getDetachState());
	return true;
}

Uint16 UNIX_UnixThread::getDetachState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getInheritSched(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INHERIT_SCHED, getInheritSched());
	return true;
}

Uint16 UNIX_UnixThread::getInheritSched() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getContentionScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTENTION_SCOPE, getContentionScope());
	return true;
}

Uint16 UNIX_UnixThread::getContentionScope() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getStackSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STACK_SIZE, getStackSize());
	return true;
}

String UNIX_UnixThread::getStackSize() const
{
	return String ("");
}

Boolean UNIX_UnixThread::getConcurrencyLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONCURRENCY_LEVEL, getConcurrencyLevel());
	return true;
}

Uint64 UNIX_UnixThread::getConcurrencyLevel() const
{
	return Uint64(0);
}

Boolean UNIX_UnixThread::getCancelState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCEL_STATE, getCancelState());
	return true;
}

Uint16 UNIX_UnixThread::getCancelState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixThread::getCancelType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCEL_TYPE, getCancelType());
	return true;
}

Uint16 UNIX_UnixThread::getCancelType() const
{
	return Uint16(0);
}



Boolean UNIX_UnixThread::initialize()
{
	return false;
}

Boolean UNIX_UnixThread::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UnixThread::finalize()
{
	return false;
}

Boolean UNIX_UnixThread::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String processCreationClassNameKey;
	String processHandleKey;
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
		else if (keyName.equal(PROPERTY_PROCESS_CREATION_CLASS_NAME)) processCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS_HANDLE)) processHandleKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
