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

ROOT = ../../../..


DIR = Providers/ManagedSystem/UNIXProviders

include $(ROOT)/mak/config.mak

LIBRARY = UNIXProviders

SOURCES = \
	CIMHelper.cpp \
	UNIX_CreateDirectoryAction.cpp \
	UNIX_CreateDirectoryAction_AIX.cxx \
	UNIX_CreateDirectoryAction_DARWIN.cxx \
	UNIX_CreateDirectoryAction_FREEBSD.cxx \
	UNIX_CreateDirectoryAction_HPUX.cxx \
	UNIX_CreateDirectoryAction_LINUX.cxx \
	UNIX_CreateDirectoryAction_SOLARIS.cxx \
	UNIX_CreateDirectoryAction_TRU64.cxx \
	UNIX_CreateDirectoryAction_VMS.cxx \
	UNIX_CreateDirectoryAction_WIN32.cxx \
	UNIX_CreateDirectoryAction_ZOS.cxx \
	UNIX_CreateDirectoryAction_STUB.cxx \
	UNIX_CreateDirectoryActionProvider.cpp \
	UNIX_DeviceFile.cpp \
	UNIX_DeviceFile_AIX.cxx \
	UNIX_DeviceFile_DARWIN.cxx \
	UNIX_DeviceFile_FREEBSD.cxx \
	UNIX_DeviceFile_HPUX.cxx \
	UNIX_DeviceFile_LINUX.cxx \
	UNIX_DeviceFile_SOLARIS.cxx \
	UNIX_DeviceFile_TRU64.cxx \
	UNIX_DeviceFile_VMS.cxx \
	UNIX_DeviceFile_WIN32.cxx \
	UNIX_DeviceFile_ZOS.cxx \
	UNIX_DeviceFile_STUB.cxx \
	UNIX_DeviceFileProvider.cpp \
	UNIX_Directory.cpp \
	UNIX_Directory_AIX.cxx \
	UNIX_Directory_DARWIN.cxx \
	UNIX_Directory_FREEBSD.cxx \
	UNIX_Directory_HPUX.cxx \
	UNIX_Directory_LINUX.cxx \
	UNIX_Directory_SOLARIS.cxx \
	UNIX_Directory_TRU64.cxx \
	UNIX_Directory_VMS.cxx \
	UNIX_Directory_WIN32.cxx \
	UNIX_Directory_ZOS.cxx \
	UNIX_Directory_STUB.cxx \
	UNIX_DirectoryProvider.cpp \
	UNIX_FileSystem.cpp \
	UNIX_FileSystem_AIX.cxx \
	UNIX_FileSystem_DARWIN.cxx \
	UNIX_FileSystem_FREEBSD.cxx \
	UNIX_FileSystem_HPUX.cxx \
	UNIX_FileSystem_LINUX.cxx \
	UNIX_FileSystem_SOLARIS.cxx \
	UNIX_FileSystem_TRU64.cxx \
	UNIX_FileSystem_VMS.cxx \
	UNIX_FileSystem_WIN32.cxx \
	UNIX_FileSystem_ZOS.cxx \
	UNIX_FileSystem_STUB.cxx \
	UNIX_FileSystemProvider.cpp \
	UNIX_ApplicationSystem.cpp \
	UNIX_ApplicationSystem_AIX.cxx \
	UNIX_ApplicationSystem_DARWIN.cxx \
	UNIX_ApplicationSystem_FREEBSD.cxx \
	UNIX_ApplicationSystem_HPUX.cxx \
	UNIX_ApplicationSystem_LINUX.cxx \
	UNIX_ApplicationSystem_SOLARIS.cxx \
	UNIX_ApplicationSystem_TRU64.cxx \
	UNIX_ApplicationSystem_VMS.cxx \
	UNIX_ApplicationSystem_WIN32.cxx \
	UNIX_ApplicationSystem_ZOS.cxx \
	UNIX_ApplicationSystem_STUB.cxx \
	UNIX_ApplicationSystemProvider.cpp \
	UNIX_DatabaseSystem.cpp \
	UNIX_DatabaseSystem_AIX.cxx \
	UNIX_DatabaseSystem_DARWIN.cxx \
	UNIX_DatabaseSystem_FREEBSD.cxx \
	UNIX_DatabaseSystem_HPUX.cxx \
	UNIX_DatabaseSystem_LINUX.cxx \
	UNIX_DatabaseSystem_SOLARIS.cxx \
	UNIX_DatabaseSystem_TRU64.cxx \
	UNIX_DatabaseSystem_VMS.cxx \
	UNIX_DatabaseSystem_WIN32.cxx \
	UNIX_DatabaseSystem_ZOS.cxx \
	UNIX_DatabaseSystem_STUB.cxx \
	UNIX_DatabaseSystemProvider.cpp \
	UNIX_VirtualComputerSystem.cpp \
	UNIX_VirtualComputerSystem_AIX.cxx \
	UNIX_VirtualComputerSystem_DARWIN.cxx \
	UNIX_VirtualComputerSystem_FREEBSD.cxx \
	UNIX_VirtualComputerSystem_HPUX.cxx \
	UNIX_VirtualComputerSystem_LINUX.cxx \
	UNIX_VirtualComputerSystem_SOLARIS.cxx \
	UNIX_VirtualComputerSystem_TRU64.cxx \
	UNIX_VirtualComputerSystem_VMS.cxx \
	UNIX_VirtualComputerSystem_WIN32.cxx \
	UNIX_VirtualComputerSystem_ZOS.cxx \
	UNIX_VirtualComputerSystem_STUB.cxx \
	UNIX_VirtualComputerSystemProvider.cpp \
	UNIX_Cluster.cpp \
	UNIX_Cluster_AIX.cxx \
	UNIX_Cluster_DARWIN.cxx \
	UNIX_Cluster_FREEBSD.cxx \
	UNIX_Cluster_HPUX.cxx \
	UNIX_Cluster_LINUX.cxx \
	UNIX_Cluster_SOLARIS.cxx \
	UNIX_Cluster_TRU64.cxx \
	UNIX_Cluster_VMS.cxx \
	UNIX_Cluster_WIN32.cxx \
	UNIX_Cluster_ZOS.cxx \
	UNIX_Cluster_STUB.cxx \
	UNIX_ClusterProvider.cpp \
	UNIX_MessageLog.cpp \
	UNIX_MessageLog_AIX.cxx \
	UNIX_MessageLog_DARWIN.cxx \
	UNIX_MessageLog_FREEBSD.cxx \
	UNIX_MessageLog_HPUX.cxx \
	UNIX_MessageLog_LINUX.cxx \
	UNIX_MessageLog_SOLARIS.cxx \
	UNIX_MessageLog_TRU64.cxx \
	UNIX_MessageLog_VMS.cxx \
	UNIX_MessageLog_WIN32.cxx \
	UNIX_MessageLog_ZOS.cxx \
	UNIX_MessageLog_STUB.cxx \
	UNIX_MessageLogProvider.cpp \
	UNIX_OperatingSystem.cpp \
	UNIX_OperatingSystem_AIX.cxx \
	UNIX_OperatingSystem_DARWIN.cxx \
	UNIX_OperatingSystem_FREEBSD.cxx \
	UNIX_OperatingSystem_HPUX.cxx \
	UNIX_OperatingSystem_LINUX.cxx \
	UNIX_OperatingSystem_SOLARIS.cxx \
	UNIX_OperatingSystem_TRU64.cxx \
	UNIX_OperatingSystem_VMS.cxx \
	UNIX_OperatingSystem_WIN32.cxx \
	UNIX_OperatingSystem_ZOS.cxx \
	UNIX_OperatingSystem_STUB.cxx \
	UNIX_OperatingSystemProvider.cpp \
	UNIX_Account.cpp \
	UNIX_Account_AIX.cxx \
	UNIX_Account_DARWIN.cxx \
	UNIX_Account_FREEBSD.cxx \
	UNIX_Account_HPUX.cxx \
	UNIX_Account_LINUX.cxx \
	UNIX_Account_SOLARIS.cxx \
	UNIX_Account_TRU64.cxx \
	UNIX_Account_VMS.cxx \
	UNIX_Account_WIN32.cxx \
	UNIX_Account_ZOS.cxx \
	UNIX_Account_STUB.cxx \
	UNIX_AccountProvider.cpp \
	UNIX_EthernetPort.cpp \
	UNIX_EthernetPort_AIX.cxx \
	UNIX_EthernetPort_DARWIN.cxx \
	UNIX_EthernetPort_FREEBSD.cxx \
	UNIX_EthernetPort_HPUX.cxx \
	UNIX_EthernetPort_LINUX.cxx \
	UNIX_EthernetPort_SOLARIS.cxx \
	UNIX_EthernetPort_TRU64.cxx \
	UNIX_EthernetPort_VMS.cxx \
	UNIX_EthernetPort_WIN32.cxx \
	UNIX_EthernetPort_ZOS.cxx \
	UNIX_EthernetPort_STUB.cxx \
	UNIX_EthernetPortProvider.cpp \
	UNIX_DiskDrive.cpp \
	UNIX_DiskDrive_AIX.cxx \
	UNIX_DiskDrive_DARWIN.cxx \
	UNIX_DiskDrive_FREEBSD.cxx \
	UNIX_DiskDrive_HPUX.cxx \
	UNIX_DiskDrive_LINUX.cxx \
	UNIX_DiskDrive_SOLARIS.cxx \
	UNIX_DiskDrive_TRU64.cxx \
	UNIX_DiskDrive_VMS.cxx \
	UNIX_DiskDrive_WIN32.cxx \
	UNIX_DiskDrive_ZOS.cxx \
	UNIX_DiskDrive_STUB.cxx \
	UNIX_DiskDriveProvider.cpp \
	UNIX_LogicalDisk.cpp \
	UNIX_LogicalDisk_AIX.cxx \
	UNIX_LogicalDisk_DARWIN.cxx \
	UNIX_LogicalDisk_FREEBSD.cxx \
	UNIX_LogicalDisk_HPUX.cxx \
	UNIX_LogicalDisk_LINUX.cxx \
	UNIX_LogicalDisk_SOLARIS.cxx \
	UNIX_LogicalDisk_TRU64.cxx \
	UNIX_LogicalDisk_VMS.cxx \
	UNIX_LogicalDisk_WIN32.cxx \
	UNIX_LogicalDisk_ZOS.cxx \
	UNIX_LogicalDisk_STUB.cxx \
	UNIX_LogicalDiskProvider.cpp \
	UNIX_DiskPartition.cpp \
	UNIX_DiskPartition_AIX.cxx \
	UNIX_DiskPartition_DARWIN.cxx \
	UNIX_DiskPartition_FREEBSD.cxx \
	UNIX_DiskPartition_HPUX.cxx \
	UNIX_DiskPartition_LINUX.cxx \
	UNIX_DiskPartition_SOLARIS.cxx \
	UNIX_DiskPartition_TRU64.cxx \
	UNIX_DiskPartition_VMS.cxx \
	UNIX_DiskPartition_WIN32.cxx \
	UNIX_DiskPartition_ZOS.cxx \
	UNIX_DiskPartition_STUB.cxx \
	UNIX_DiskPartitionProvider.cpp \
	UNIX_EthernetAdapter.cpp \
	UNIX_EthernetAdapter_AIX.cxx \
	UNIX_EthernetAdapter_DARWIN.cxx \
	UNIX_EthernetAdapter_FREEBSD.cxx \
	UNIX_EthernetAdapter_HPUX.cxx \
	UNIX_EthernetAdapter_LINUX.cxx \
	UNIX_EthernetAdapter_SOLARIS.cxx \
	UNIX_EthernetAdapter_TRU64.cxx \
	UNIX_EthernetAdapter_VMS.cxx \
	UNIX_EthernetAdapter_WIN32.cxx \
	UNIX_EthernetAdapter_ZOS.cxx \
	UNIX_EthernetAdapter_STUB.cxx \
	UNIX_EthernetAdapterProvider.cpp \
	UNIX_DatabaseService.cpp \
	UNIX_DatabaseService_AIX.cxx \
	UNIX_DatabaseService_DARWIN.cxx \
	UNIX_DatabaseService_FREEBSD.cxx \
	UNIX_DatabaseService_HPUX.cxx \
	UNIX_DatabaseService_LINUX.cxx \
	UNIX_DatabaseService_SOLARIS.cxx \
	UNIX_DatabaseService_TRU64.cxx \
	UNIX_DatabaseService_VMS.cxx \
	UNIX_DatabaseService_WIN32.cxx \
	UNIX_DatabaseService_ZOS.cxx \
	UNIX_DatabaseService_STUB.cxx \
	UNIX_DatabaseServiceProvider.cpp \
	UNIX_SoftwareElement.cpp \
	UNIX_SoftwareElement_AIX.cxx \
	UNIX_SoftwareElement_DARWIN.cxx \
	UNIX_SoftwareElement_FREEBSD.cxx \
	UNIX_SoftwareElement_HPUX.cxx \
	UNIX_SoftwareElement_LINUX.cxx \
	UNIX_SoftwareElement_SOLARIS.cxx \
	UNIX_SoftwareElement_TRU64.cxx \
	UNIX_SoftwareElement_VMS.cxx \
	UNIX_SoftwareElement_WIN32.cxx \
	UNIX_SoftwareElement_ZOS.cxx \
	UNIX_SoftwareElement_STUB.cxx \
	UNIX_SoftwareElementProvider.cpp \
	UNIX_UsersAccess.cpp \
	UNIX_UsersAccess_AIX.cxx \
	UNIX_UsersAccess_DARWIN.cxx \
	UNIX_UsersAccess_FREEBSD.cxx \
	UNIX_UsersAccess_HPUX.cxx \
	UNIX_UsersAccess_LINUX.cxx \
	UNIX_UsersAccess_SOLARIS.cxx \
	UNIX_UsersAccess_TRU64.cxx \
	UNIX_UsersAccess_VMS.cxx \
	UNIX_UsersAccess_WIN32.cxx \
	UNIX_UsersAccess_ZOS.cxx \
	UNIX_UsersAccess_STUB.cxx \
	UNIX_UsersAccessProvider.cpp \
	UNIX_LogEntry.cpp \
	UNIX_LogEntry_AIX.cxx \
	UNIX_LogEntry_DARWIN.cxx \
	UNIX_LogEntry_FREEBSD.cxx \
	UNIX_LogEntry_HPUX.cxx \
	UNIX_LogEntry_LINUX.cxx \
	UNIX_LogEntry_SOLARIS.cxx \
	UNIX_LogEntry_TRU64.cxx \
	UNIX_LogEntry_VMS.cxx \
	UNIX_LogEntry_WIN32.cxx \
	UNIX_LogEntry_ZOS.cxx \
	UNIX_LogEntry_STUB.cxx \
	UNIX_LogEntryProvider.cpp \
	UNIX_AccountManagementCapabilities.cpp \
	UNIX_AccountManagementCapabilities_AIX.cxx \
	UNIX_AccountManagementCapabilities_DARWIN.cxx \
	UNIX_AccountManagementCapabilities_FREEBSD.cxx \
	UNIX_AccountManagementCapabilities_HPUX.cxx \
	UNIX_AccountManagementCapabilities_LINUX.cxx \
	UNIX_AccountManagementCapabilities_SOLARIS.cxx \
	UNIX_AccountManagementCapabilities_TRU64.cxx \
	UNIX_AccountManagementCapabilities_VMS.cxx \
	UNIX_AccountManagementCapabilities_WIN32.cxx \
	UNIX_AccountManagementCapabilities_ZOS.cxx \
	UNIX_AccountManagementCapabilities_STUB.cxx \
	UNIX_AccountManagementCapabilitiesProvider.cpp \
	UNIX_InstalledOS.cpp \
	UNIX_InstalledOS_AIX.cxx \
	UNIX_InstalledOS_DARWIN.cxx \
	UNIX_InstalledOS_FREEBSD.cxx \
	UNIX_InstalledOS_HPUX.cxx \
	UNIX_InstalledOS_LINUX.cxx \
	UNIX_InstalledOS_SOLARIS.cxx \
	UNIX_InstalledOS_TRU64.cxx \
	UNIX_InstalledOS_VMS.cxx \
	UNIX_InstalledOS_WIN32.cxx \
	UNIX_InstalledOS_ZOS.cxx \
	UNIX_InstalledOS_STUB.cxx \
	UNIX_InstalledOSProvider.cpp \
	UNIX_OSProcess.cpp \
	UNIX_OSProcess_AIX.cxx \
	UNIX_OSProcess_DARWIN.cxx \
	UNIX_OSProcess_FREEBSD.cxx \
	UNIX_OSProcess_HPUX.cxx \
	UNIX_OSProcess_LINUX.cxx \
	UNIX_OSProcess_SOLARIS.cxx \
	UNIX_OSProcess_TRU64.cxx \
	UNIX_OSProcess_VMS.cxx \
	UNIX_OSProcess_WIN32.cxx \
	UNIX_OSProcess_ZOS.cxx \
	UNIX_OSProcess_STUB.cxx \
	UNIX_OSProcessProvider.cpp \
	UNIX_Mount.cpp \
	UNIX_Mount_AIX.cxx \
	UNIX_Mount_DARWIN.cxx \
	UNIX_Mount_FREEBSD.cxx \
	UNIX_Mount_HPUX.cxx \
	UNIX_Mount_LINUX.cxx \
	UNIX_Mount_SOLARIS.cxx \
	UNIX_Mount_TRU64.cxx \
	UNIX_Mount_VMS.cxx \
	UNIX_Mount_WIN32.cxx \
	UNIX_Mount_ZOS.cxx \
	UNIX_Mount_STUB.cxx \
	UNIX_MountProvider.cpp \
	UNIX_InstalledSoftwareElement.cpp \
	UNIX_InstalledSoftwareElement_AIX.cxx \
	UNIX_InstalledSoftwareElement_DARWIN.cxx \
	UNIX_InstalledSoftwareElement_FREEBSD.cxx \
	UNIX_InstalledSoftwareElement_HPUX.cxx \
	UNIX_InstalledSoftwareElement_LINUX.cxx \
	UNIX_InstalledSoftwareElement_SOLARIS.cxx \
	UNIX_InstalledSoftwareElement_TRU64.cxx \
	UNIX_InstalledSoftwareElement_VMS.cxx \
	UNIX_InstalledSoftwareElement_WIN32.cxx \
	UNIX_InstalledSoftwareElement_ZOS.cxx \
	UNIX_InstalledSoftwareElement_STUB.cxx \
	UNIX_InstalledSoftwareElementProvider.cpp \
	UNIX_Main.cpp



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
	-lcam \
	-lpkg

include $(ROOT)/mak/dynamic-library.mak

tests:
	
poststarttests:
	

