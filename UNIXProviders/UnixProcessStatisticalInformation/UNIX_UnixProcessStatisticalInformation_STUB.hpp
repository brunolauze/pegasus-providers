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


UNIX_UnixProcessStatisticalInformation::UNIX_UnixProcessStatisticalInformation(void)
{
}

UNIX_UnixProcessStatisticalInformation::~UNIX_UnixProcessStatisticalInformation(void)
{
}


Boolean UNIX_UnixProcessStatisticalInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getElementName() const
{
	return String("UnixProcessStatisticalInformation");
}

Boolean UNIX_UnixProcessStatisticalInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getName() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_UnixProcessStatisticalInformation::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_UnixProcessStatisticalInformation::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getOSCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getOSName() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_UnixProcessStatisticalInformation::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getHandle() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getProcessCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_CREATION_CLASS_NAME, getProcessCreationClassName());
	return true;
}

String UNIX_UnixProcessStatisticalInformation::getProcessCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnixProcessStatisticalInformation::getCPUTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_P_U_TIME, getCPUTime());
	return true;
}

Uint32 UNIX_UnixProcessStatisticalInformation::getCPUTime() const
{
	return Uint32(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getRealText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_TEXT, getRealText());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getRealText() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getRealData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_DATA, getRealData());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getRealData() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getRealStack(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_STACK, getRealStack());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getRealStack() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getVirtualText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_TEXT, getVirtualText());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getVirtualText() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getVirtualData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_DATA, getVirtualData());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getVirtualData() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getVirtualStack(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_STACK, getVirtualStack());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getVirtualStack() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getVirtualMemoryMappedFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_MEMORY_MAPPED_FILE_SIZE, getVirtualMemoryMappedFileSize());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getVirtualMemoryMappedFileSize() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getVirtualSharedMemory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SHARED_MEMORY, getVirtualSharedMemory());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getVirtualSharedMemory() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getCpuTimeDeadChildren(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_TIME_DEAD_CHILDREN, getCpuTimeDeadChildren());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getCpuTimeDeadChildren() const
{
	return Uint64(0);
}

Boolean UNIX_UnixProcessStatisticalInformation::getSystemTimeDeadChildren(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_TIME_DEAD_CHILDREN, getSystemTimeDeadChildren());
	return true;
}

Uint64 UNIX_UnixProcessStatisticalInformation::getSystemTimeDeadChildren() const
{
	return Uint64(0);
}



Boolean UNIX_UnixProcessStatisticalInformation::initialize()
{
	return false;
}

Boolean UNIX_UnixProcessStatisticalInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UnixProcessStatisticalInformation::finalize()
{
	return false;
}

Boolean UNIX_UnixProcessStatisticalInformation::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String handleKey;
	String processCreationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_CREATION_CLASS_NAME)) oSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_NAME)) oSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS_CREATION_CLASS_NAME)) processCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
