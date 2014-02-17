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

#ifndef __CIM_FILESYSTEM_H
#define __CIM_FILESYSTEM_H


#include "CIM_EnabledLogicalElement.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_ROOT				"Root"
#define PROPERTY_BLOCK_SIZE				"BlockSize"
#define PROPERTY_FILE_SYSTEM_SIZE				"FileSystemSize"
#define PROPERTY_AVAILABLE_SPACE				"AvailableSpace"
#define PROPERTY_READ_ONLY				"ReadOnly"
#define PROPERTY_ENCRYPTION_METHOD				"EncryptionMethod"
#define PROPERTY_COMPRESSION_METHOD				"CompressionMethod"
#define PROPERTY_CASE_SENSITIVE				"CaseSensitive"
#define PROPERTY_CASE_PRESERVED				"CasePreserved"
#define PROPERTY_CODE_SET				"CodeSet"
#define PROPERTY_MAX_FILE_NAME_LENGTH				"MaxFileNameLength"
#define PROPERTY_CLUSTER_SIZE				"ClusterSize"
#define PROPERTY_FILE_SYSTEM_TYPE				"FileSystemType"
#define PROPERTY_PERSISTENCE_TYPE				"PersistenceType"
#define PROPERTY_OTHER_PERSISTENCE_TYPE				"OtherPersistenceType"
#define PROPERTY_NUMBER_OF_FILES				"NumberOfFiles"


class CIM_FileSystem :
	public CIM_EnabledLogicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getCSCreationClassName(CIMProperty&) const=0;
	virtual String getCSCreationClassName() const=0;
	virtual Boolean getCSName(CIMProperty&) const=0;
	virtual String getCSName() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getRoot(CIMProperty&) const=0;
	virtual String getRoot() const=0;
	virtual Boolean getBlockSize(CIMProperty&) const=0;
	virtual Uint64 getBlockSize() const=0;
	virtual Boolean getFileSystemSize(CIMProperty&) const=0;
	virtual Uint64 getFileSystemSize() const=0;
	virtual Boolean getAvailableSpace(CIMProperty&) const=0;
	virtual Uint64 getAvailableSpace() const=0;
	virtual Boolean getReadOnly(CIMProperty&) const=0;
	virtual Boolean getReadOnly() const=0;
	virtual Boolean getEncryptionMethod(CIMProperty&) const=0;
	virtual String getEncryptionMethod() const=0;
	virtual Boolean getCompressionMethod(CIMProperty&) const=0;
	virtual String getCompressionMethod() const=0;
	virtual Boolean getCaseSensitive(CIMProperty&) const=0;
	virtual Boolean getCaseSensitive() const=0;
	virtual Boolean getCasePreserved(CIMProperty&) const=0;
	virtual Boolean getCasePreserved() const=0;
	virtual Boolean getCodeSet(CIMProperty&) const=0;
	virtual Array<Uint16> getCodeSet() const=0;
	virtual Boolean getMaxFileNameLength(CIMProperty&) const=0;
	virtual Uint32 getMaxFileNameLength() const=0;
	virtual Boolean getClusterSize(CIMProperty&) const=0;
	virtual Uint32 getClusterSize() const=0;
	virtual Boolean getFileSystemType(CIMProperty&) const=0;
	virtual String getFileSystemType() const=0;
	virtual Boolean getPersistenceType(CIMProperty&) const=0;
	virtual Uint16 getPersistenceType() const=0;
	virtual Boolean getOtherPersistenceType(CIMProperty&) const=0;
	virtual String getOtherPersistenceType() const=0;
	virtual Boolean getNumberOfFiles(CIMProperty&) const=0;
	virtual Uint64 getNumberOfFiles() const=0;

private:

};

#endif /* CIM_FILESYSTEM */
