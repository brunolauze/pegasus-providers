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


DIR = Providers/ManagedSystem/UNIXProviders/InstalledSoftwareElement

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_InstalledSoftwareElementProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_InstalledSoftwareElementMain.cpp \
	UNIX_InstalledSoftwareElement.cpp \
	UNIX_InstalledSoftwareElementProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_InstalledSoftwareElement_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_InstalledSoftwareElement_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_InstalledSoftwareElement_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_InstalledSoftwareElement_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_InstalledSoftwareElement_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_InstalledSoftwareElement_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_InstalledSoftwareElement_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_InstalledSoftwareElement_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_InstalledSoftwareElement_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_InstalledSoftwareElement_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_InstalledSoftwareElement_STUB.cxx
endif


SOURCES += \
	../VirtualComputerSystem/UNIX_VirtualComputerSystem.cpp \
	../VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_STUB.cxx
endif


SOURCES += \
	../ComputerSystem/UNIX_ComputerSystem.cpp \
	../ComputerSystem/UNIX_ComputerSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_STUB.cxx
endif


SOURCES += \
	../Cluster/UNIX_Cluster.cpp \
	../Cluster/UNIX_ClusterProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../Cluster/UNIX_Cluster_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += ../Cluster/UNIX_Cluster_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += ../Cluster/UNIX_Cluster_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += ../Cluster/UNIX_Cluster_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += ../Cluster/UNIX_Cluster_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += ../Cluster/UNIX_Cluster_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += ../Cluster/UNIX_Cluster_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += ../Cluster/UNIX_Cluster_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += ../Cluster/UNIX_Cluster_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += ../Cluster/UNIX_Cluster_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../Cluster/UNIX_Cluster_STUB.cxx
endif


SOURCES += \
	../SoftwareElement/UNIX_SoftwareElement.cpp \
	../SoftwareElement/UNIX_SoftwareElementProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_STUB.cxx
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
	-L/usr/local/lib -lpkg \
	-lkvm \
	-lcam

include $(ROOT)/mak/dynamic-library.mak


