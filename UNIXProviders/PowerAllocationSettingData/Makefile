#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////

ROOT = ../../../../..


DIR = Providers/ManagedSystem/UNIXProviders/PowerAllocationSettingData

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_PowerAllocationSettingData

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_PowerAllocationSettingData.cpp \
	UNIX_PowerAllocationSettingDataProvider.cpp \
	UNIX_PowerAllocationSettingDataMain.cpp
ifeq ($(OS), aix)
	SOURCE += UNIX_PowerAllocationSettingData_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += UNIX_PowerAllocationSettingData_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += UNIX_PowerAllocationSettingData_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += UNIX_PowerAllocationSettingData_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += UNIX_PowerAllocationSettingData_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += UNIX_PowerAllocationSettingData_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += UNIX_PowerAllocationSettingData_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += UNIX_PowerAllocationSettingData_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += UNIX_PowerAllocationSettingData_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += UNIX_PowerAllocationSettingData_ZOS.cxx
endif
ifeq ($(OS), aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos)

else
	SOURCE += UNIX_PowerAllocationSettingData_STUB.cxx
endif

LIBRARIES = \
	pegprovider \
	pegclient \
	pegcommon \
	pegquerycommon \
	pegqueryexpression \
	pegcql \
	pegwql

EXTRA_LIBRARIES = \
	-pthread \
	-lutil \
	-lgeom \
	-lkvm \
	-lcam

include $(ROOT)/mak/dynamic-library.mak


