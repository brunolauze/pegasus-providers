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


UNIX_UnixFile::UNIX_UnixFile(void)
{
}

UNIX_UnixFile::~UNIX_UnixFile(void)
{
}


Boolean UNIX_UnixFile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnixFile::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnixFile::getCaption() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnixFile::getDescription() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnixFile::getElementName() const
{
	return String("UnixFile");
}

Boolean UNIX_UnixFile::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_UnixFile::getInstallDate() const
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

Boolean UNIX_UnixFile::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UnixFile::getName() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_UnixFile::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_UnixFile::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_UnixFile::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_UnixFile::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_UnixFile::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_UnixFile::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_UnixFile::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_UnixFile::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_UnixFile::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixFile::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_UnixFile::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_UnixFile::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_UnixFile::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_UnixFile::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_UnixFile::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_UnixFile::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_UnixFile::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_UnixFile::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_UnixFile::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_UnixFile::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_UnixFile::getFSCreationClassName() const
{
	return String("UNIX_FileSystem");
}

Boolean UNIX_UnixFile::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_UnixFile::getFSName() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getLFCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_F_CREATION_CLASS_NAME, getLFCreationClassName());
	return true;
}

String UNIX_UnixFile::getLFCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getLFName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_F_NAME, getLFName());
	return true;
}

String UNIX_UnixFile::getLFName() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_UnixFile::getUserID() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupID());
	return true;
}

String UNIX_UnixFile::getGroupID() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getSaveText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAVE_TEXT, getSaveText());
	return true;
}

Boolean UNIX_UnixFile::getSaveText() const
{
	return Boolean(false);
}

Boolean UNIX_UnixFile::getLinkCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_COUNT, getLinkCount());
	return true;
}

Uint64 UNIX_UnixFile::getLinkCount() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getFileInodeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_INODE_NUMBER, getFileInodeNumber());
	return true;
}

String UNIX_UnixFile::getFileInodeNumber() const
{
	return String ("");
}

Boolean UNIX_UnixFile::getSetUid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_UID, getSetUid());
	return true;
}

Boolean UNIX_UnixFile::getSetUid() const
{
	return Boolean(false);
}

Boolean UNIX_UnixFile::getSetGid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_GID, getSetGid());
	return true;
}

Boolean UNIX_UnixFile::getSetGid() const
{
	return Boolean(false);
}

Boolean UNIX_UnixFile::getLastModifiedInode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED_INODE, getLastModifiedInode());
	return true;
}

CIMDateTime UNIX_UnixFile::getLastModifiedInode() const
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

Boolean UNIX_UnixFile::getLinkMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_MAX, getLinkMax());
	return true;
}

Uint64 UNIX_UnixFile::getLinkMax() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getNameMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_MAX, getNameMax());
	return true;
}

Uint64 UNIX_UnixFile::getNameMax() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getPathMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_MAX, getPathMax());
	return true;
}

Uint64 UNIX_UnixFile::getPathMax() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getPosixChownRestricted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_CHOWN_RESTRICTED, getPosixChownRestricted());
	return true;
}

Uint64 UNIX_UnixFile::getPosixChownRestricted() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getPosixNoTrunc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_NO_TRUNC, getPosixNoTrunc());
	return true;
}

Uint64 UNIX_UnixFile::getPosixNoTrunc() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getPosixAsyncIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_ASYNC_IO, getPosixAsyncIo());
	return true;
}

Uint64 UNIX_UnixFile::getPosixAsyncIo() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getPosixPrioIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_PRIO_IO, getPosixPrioIo());
	return true;
}

Uint64 UNIX_UnixFile::getPosixPrioIo() const
{
	return Uint64(0);
}

Boolean UNIX_UnixFile::getPosixSyncIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_SYNC_IO, getPosixSyncIo());
	return true;
}

Uint64 UNIX_UnixFile::getPosixSyncIo() const
{
	return Uint64(0);
}



Boolean UNIX_UnixFile::initialize()
{
	return false;
}

Boolean UNIX_UnixFile::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UnixFile::finalize()
{
	return false;
}

Boolean UNIX_UnixFile::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String fSCreationClassNameKey;
	String fSNameKey;
	String lFCreationClassNameKey;
	String lFNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_CREATION_CLASS_NAME)) fSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_NAME)) fSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_L_F_CREATION_CLASS_NAME)) lFCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_L_F_NAME)) lFNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
