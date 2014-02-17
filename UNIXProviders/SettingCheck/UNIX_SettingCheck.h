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

#ifndef __UNIX_SETTINGCHECK_H
#define __UNIX_SETTINGCHECK_H


#include "CIM_Check.h"

#include "UNIX_SettingCheckDeps.h"


#define PROPERTY_SECTION_KEY				"SectionKey"
#define PROPERTY_ENTRY_NAME				"EntryName"
#define PROPERTY_ENTRY_VALUE				"EntryValue"
#define PROPERTY_CHECK_TYPE				"CheckType"
#define PROPERTY_FILE_NAME				"FileName"


class UNIX_SettingCheck :
	public CIM_Check
{
public:

	UNIX_SettingCheck();
	~UNIX_SettingCheck();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getSoftwareElementState(CIMProperty&) const;
	virtual Uint16 getSoftwareElementState() const;
	virtual Boolean getSoftwareElementID(CIMProperty&) const;
	virtual String getSoftwareElementID() const;
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystem() const;
	virtual Boolean getCheckID(CIMProperty&) const;
	virtual String getCheckID() const;
	virtual Boolean getCheckMode(CIMProperty&) const;
	virtual Boolean getCheckMode() const;
	virtual Boolean getSectionKey(CIMProperty&) const;
	virtual String getSectionKey() const;
	virtual Boolean getEntryName(CIMProperty&) const;
	virtual String getEntryName() const;
	virtual Boolean getEntryValue(CIMProperty&) const;
	virtual String getEntryValue() const;
	virtual Boolean getCheckType(CIMProperty&) const;
	virtual Uint16 getCheckType() const;
	virtual Boolean getFileName(CIMProperty&) const;
	virtual String getFileName() const;

private:
	CIMName currentScope;

#	include "UNIX_SettingCheckPrivate.h"


};

#endif /* UNIX_SETTINGCHECK */
