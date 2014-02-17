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


UNIX_UnixLocalFileSystem::UNIX_UnixLocalFileSystem(void)
{
}

UNIX_UnixLocalFileSystem::~UNIX_UnixLocalFileSystem(void)
{
}


Boolean UNIX_UnixLocalFileSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnixLocalFileSystem::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnixLocalFileSystem::getCaption() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnixLocalFileSystem::getDescription() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnixLocalFileSystem::getElementName() const
{
	return String("UnixLocalFileSystem");
}

Boolean UNIX_UnixLocalFileSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_UnixLocalFileSystem::getInstallDate() const
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

Boolean UNIX_UnixLocalFileSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UnixLocalFileSystem::getName() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_UnixLocalFileSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixLocalFileSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_UnixLocalFileSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_UnixLocalFileSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_UnixLocalFileSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_UnixLocalFileSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_UnixLocalFileSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixLocalFileSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixLocalFileSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_UnixLocalFileSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_UnixLocalFileSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_UnixLocalFileSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_UnixLocalFileSystem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixLocalFileSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_UnixLocalFileSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_UnixLocalFileSystem::getTimeOfLastStateChange() const
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

Boolean UNIX_UnixLocalFileSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_UnixLocalFileSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixLocalFileSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_UnixLocalFileSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_UnixLocalFileSystem::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_UnixLocalFileSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_UnixLocalFileSystem::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_UnixLocalFileSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UnixLocalFileSystem::getCreationClassName() const
{
	return String("UNIX_UnixLocalFileSystem");
}

Boolean UNIX_UnixLocalFileSystem::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_UnixLocalFileSystem::getRoot() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_UnixLocalFileSystem::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getFileSystemSize() const
{
	return Uint64(0);
}

Boolean UNIX_UnixLocalFileSystem::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getAvailableSpace() const
{
	return Uint64(0);
}

Boolean UNIX_UnixLocalFileSystem::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_UnixLocalFileSystem::getReadOnly() const
{
	return Boolean(false);
}

Boolean UNIX_UnixLocalFileSystem::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_UnixLocalFileSystem::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_UnixLocalFileSystem::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_UnixLocalFileSystem::getCaseSensitive() const
{
	return Boolean(false);
}

Boolean UNIX_UnixLocalFileSystem::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_UnixLocalFileSystem::getCasePreserved() const
{
	return Boolean(false);
}

Boolean UNIX_UnixLocalFileSystem::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_UnixLocalFileSystem::getCodeSet() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixLocalFileSystem::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_UnixLocalFileSystem::getMaxFileNameLength() const
{
	return Uint32(0);
}

Boolean UNIX_UnixLocalFileSystem::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_UnixLocalFileSystem::getClusterSize() const
{
	return Uint32(0);
}

Boolean UNIX_UnixLocalFileSystem::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_UnixLocalFileSystem::getFileSystemType() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_UnixLocalFileSystem::getPersistenceType() const
{
	return Uint16(0);
}

Boolean UNIX_UnixLocalFileSystem::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_UnixLocalFileSystem::getOtherPersistenceType() const
{
	return String ("");
}

Boolean UNIX_UnixLocalFileSystem::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getNumberOfFiles() const
{
	return Uint64(0);
}

Boolean UNIX_UnixLocalFileSystem::getFreeInodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_INODES, getFreeInodes());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getFreeInodes() const
{
	return Uint64(0);
}

Boolean UNIX_UnixLocalFileSystem::getTotalInodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_INODES, getTotalInodes());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getTotalInodes() const
{
	return Uint64(0);
}

Boolean UNIX_UnixLocalFileSystem::getFSReservedCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_RESERVED_CAPACITY, getFSReservedCapacity());
	return true;
}

Uint64 UNIX_UnixLocalFileSystem::getFSReservedCapacity() const
{
	return Uint64(0);
}



Boolean UNIX_UnixLocalFileSystem::initialize()
{
	return false;
}

Boolean UNIX_UnixLocalFileSystem::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UnixLocalFileSystem::finalize()
{
	return false;
}

Boolean UNIX_UnixLocalFileSystem::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
