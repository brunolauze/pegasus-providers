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


DIR = Providers/ManagedSystem/UNIXProviders/NFS

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_NFSProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_NFSMain.cpp \
	UNIX_NFS.cpp \
	UNIX_NFSProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_NFS_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_NFS_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_NFS_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_NFS_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_NFS_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_NFS_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_NFS_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_NFS_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_NFS_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_NFS_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_NFS_STUB.cxx
endif


SOURCES += \
	../FileSystem/UNIX_FileSystem.cpp \
	../FileSystem/UNIX_FileSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../FileSystem/UNIX_FileSystem_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += ../FileSystem/UNIX_FileSystem_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += ../FileSystem/UNIX_FileSystem_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += ../FileSystem/UNIX_FileSystem_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += ../FileSystem/UNIX_FileSystem_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += ../FileSystem/UNIX_FileSystem_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += ../FileSystem/UNIX_FileSystem_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += ../FileSystem/UNIX_FileSystem_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += ../FileSystem/UNIX_FileSystem_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += ../FileSystem/UNIX_FileSystem_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../FileSystem/UNIX_FileSystem_STUB.cxx
endif


SOURCES += \
	../RemoteFileSystem/UNIX_RemoteFileSystem.cpp \
	../RemoteFileSystem/UNIX_RemoteFileSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_AIX.cxx
endif
ifeq ($(OS), darwin)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_DARWIN.cxx
endif
ifeq ($(OS), freebsd)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_FREEBSD.cxx
endif
ifeq ($(OS), hpux)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_HPUX.cxx
endif
ifeq ($(OS), linux)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_LINUX.cxx
endif
ifeq ($(OS), solaris)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_SOLARIS.cxx
endif
ifeq ($(OS), tru64)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_TRU64.cxx
endif
ifeq ($(OS), vms)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_VMS.cxx
endif
ifeq ($(OS), win32)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_WIN32.cxx
endif
ifeq ($(OS), zos)
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_ZOS.cxx
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../RemoteFileSystem/UNIX_RemoteFileSystem_STUB.cxx
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


