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


UNIX_DatabaseStorageArea::UNIX_DatabaseStorageArea(void)
{
}

UNIX_DatabaseStorageArea::~UNIX_DatabaseStorageArea(void)
{
}


Boolean UNIX_DatabaseStorageArea::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseStorageArea::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseStorageArea::getCaption() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseStorageArea::getDescription() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseStorageArea::getElementName() const
{
	return String("DatabaseStorageArea");
}

Boolean UNIX_DatabaseStorageArea::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DatabaseStorageArea::getInstallDate() const
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

Boolean UNIX_DatabaseStorageArea::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DatabaseStorageArea::getName() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DatabaseStorageArea::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DatabaseStorageArea::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DatabaseStorageArea::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DatabaseStorageArea::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DatabaseStorageArea::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DatabaseStorageArea::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DatabaseStorageArea::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseStorageArea::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseStorageArea::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DatabaseStorageArea::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DatabaseStorageArea::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DatabaseStorageArea::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DatabaseStorageArea::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseStorageArea::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseStorageArea::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DatabaseStorageArea::getTimeOfLastStateChange() const
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

Boolean UNIX_DatabaseStorageArea::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DatabaseStorageArea::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DatabaseStorageArea::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseStorageArea::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_DatabaseStorageArea::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DatabaseStorageArea::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_DatabaseStorageArea::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DatabaseStorageArea::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DatabaseStorageArea::getCreationClassName() const
{
	return String("UNIX_DatabaseStorageArea");
}

Boolean UNIX_DatabaseStorageArea::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_DatabaseStorageArea::getRoot() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_DatabaseStorageArea::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseStorageArea::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_DatabaseStorageArea::getFileSystemSize() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseStorageArea::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_DatabaseStorageArea::getAvailableSpace() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseStorageArea::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_DatabaseStorageArea::getReadOnly() const
{
	return Boolean(false);
}

Boolean UNIX_DatabaseStorageArea::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_DatabaseStorageArea::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DatabaseStorageArea::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_DatabaseStorageArea::getCaseSensitive() const
{
	return Boolean(false);
}

Boolean UNIX_DatabaseStorageArea::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_DatabaseStorageArea::getCasePreserved() const
{
	return Boolean(false);
}

Boolean UNIX_DatabaseStorageArea::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_DatabaseStorageArea::getCodeSet() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DatabaseStorageArea::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_DatabaseStorageArea::getMaxFileNameLength() const
{
	return Uint32(0);
}

Boolean UNIX_DatabaseStorageArea::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_DatabaseStorageArea::getClusterSize() const
{
	return Uint32(0);
}

Boolean UNIX_DatabaseStorageArea::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_DatabaseStorageArea::getFileSystemType() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_DatabaseStorageArea::getPersistenceType() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseStorageArea::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_DatabaseStorageArea::getOtherPersistenceType() const
{
	return String ("");
}

Boolean UNIX_DatabaseStorageArea::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_DatabaseStorageArea::getNumberOfFiles() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseStorageArea::getIsSystemArea(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SYSTEM_AREA, getIsSystemArea());
	return true;
}

Boolean UNIX_DatabaseStorageArea::getIsSystemArea() const
{
	return Boolean(false);
}

Boolean UNIX_DatabaseStorageArea::getLastBackup(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_BACKUP, getLastBackup());
	return true;
}

CIMDateTime UNIX_DatabaseStorageArea::getLastBackup() const
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



Boolean UNIX_DatabaseStorageArea::initialize()
{
	return false;
}

Boolean UNIX_DatabaseStorageArea::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DatabaseStorageArea::finalize()
{
	return false;
}

Boolean UNIX_DatabaseStorageArea::find(Array<CIMKeyBinding> &kbArray)
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
