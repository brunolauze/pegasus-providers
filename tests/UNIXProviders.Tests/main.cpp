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


//#include "UNIX_OtherOrganizationInformationFixture.h"
//#include "UNIX_DirectorySpecificationFixture.h"
//#include "UNIX_MemoryCheckFixture.h"
//#include "UNIX_VersionCompatibilityCheckFixture.h"
//#include "UNIX_DiskSpaceCheckFixture.h"
//#include "UNIX_SoftwareElementVersionCheckFixture.h"
//#include "UNIX_FileSpecificationFixture.h"
//#include "UNIX_ArchitectureCheckFixture.h"
//#include "UNIX_OSVersionCheckFixture.h"
//#include "UNIX_SettingCheckFixture.h"
//#include "UNIX_SwapSpaceCheckFixture.h"
//#include "UNIX_RegisteredSubProfileFixture.h"
//#include "UNIX_RejectConnectionActionFixture.h"
//#include "UNIX_VendorPolicyActionFixture.h"
//#include "UNIX_NetworkPacketActionFixture.h"
//#include "UNIX_MethodActionFixture.h"
//#include "UNIX_CompoundPolicyActionFixture.h"
//#include "UNIX_IKEActionFixture.h"
//#include "UNIX_IPsecTunnelActionFixture.h"
//#include "UNIX_IPsecTransportActionFixture.h"
//#include "UNIX_PreconfiguredTunnelActionFixture.h"
//#include "UNIX_PreconfiguredTransportActionFixture.h"
//#include "UNIX_IPsecRuleFixture.h"
//#include "UNIX_IKERuleFixture.h"
//#include "UNIX_AuthenticationRuleFixture.h"
//#include "UNIX_PolicyGroupFixture.h"
//#include "UNIX_VendorPolicyConditionFixture.h"
//#include "UNIX_DocumentAuthenticationFixture.h"
//#include "UNIX_PublicPrivateKeyAuthenticationFixture.h"
//#include "UNIX_KerberosAuthenticationFixture.h"
//#include "UNIX_NetworkingIDAuthenticationFixture.h"
//#include "UNIX_SharedSecretAuthenticationFixture.h"
//#include "UNIX_PhysicalCredentialAuthenticationFixture.h"
//#include "UNIX_AccountAuthenticationFixture.h"
//#include "UNIX_BiometricAuthenticationFixture.h"
//#include "UNIX_PolicyTimePeriodConditionFixture.h"
//#include "UNIX_QueryConditionFixture.h"
//#include "UNIX_PacketFilterConditionFixture.h"
//#include "UNIX_CompoundPolicyConditionFixture.h"
//#include "UNIX_StorageErrorFixture.h"
//#include "UNIX_MemoryErrorFixture.h"
//#include "UNIX_ConfigurationFixture.h"
//#include "UNIX_RebootActionFixture.h"
//#include "UNIX_ExecuteProgramFixture.h"
//#include "UNIX_CopyFileActionFixture.h"
//#include "UNIX_RemoveFileActionFixture.h"
//#include "UNIX_ModifySettingActionFixture.h"
//#include "UNIX_RemoveDirectoryActionFixture.h"
//#include "UNIX_CreateDirectoryActionFixture.h"
//#include "UNIX_FRUFixture.h"
//#include "UNIX_BaseMetricValueFixture.h"
//#include "UNIX_AggregationMetricValueFixture.h"
//#include "UNIX_ViewFixture.h"
//#include "UNIX_PhysicalComputerSystemViewFixture.h"
//#include "UNIX_SupportAccessFixture.h"
//#include "UNIX_ProductFixture.h"
//#include "UNIX_SystemConfigurationFixture.h"
//#include "UNIX_SystemSettingFixture.h"
//#include "UNIX_VideoControllerResolutionFixture.h"
//#include "UNIX_DiagnosticSettingFixture.h"
//#include "UNIX_TimeZoneFixture.h"
//#include "UNIX_MonitorResolutionFixture.h"
//#include "UNIX_OtherGroupInformationFixture.h"
//#include "UNIX_PhysicalLinkFixture.h"
//#include "UNIX_PhysicalMediaFixture.h"
//#include "UNIX_PhysicalTapeFixture.h"
//#include "UNIX_ChipFixture.h"
//#include "UNIX_PhysicalMemoryFixture.h"
//#include "UNIX_PhysicalConnectorFixture.h"
//#include "UNIX_SlotFixture.h"
//#include "UNIX_CardFixture.h"
//#include "UNIX_SystemBusCardFixture.h"
//#include "UNIX_RackFixture.h"
//#include "UNIX_ChassisFixture.h"
//#include "UNIX_PackageLocationFixture.h"
//#include "UNIX_StorageMediaLocationFixture.h"
//#include "UNIX_MagazineFixture.h"
//#include "UNIX_AuthenticationRequirementFixture.h"
//#include "UNIX_BGPRouteMapFixture.h"
//#include "UNIX_AccessControlInformationFixture.h"
//#include "UNIX_StoragePoolFixture.h"
//#include "UNIX_ConcreteJobFixture.h"
//#include "UNIX_PrintJobFixture.h"
//#include "UNIX_DataFileFixture.h"
//#include "UNIX_FIFOPipeFileFixture.h"
//#include "UNIX_DeviceFileFixture.h"
//#include "UNIX_UnixDeviceFileFixture.h"
//#include "UNIX_DirectoryFixture.h"
//#include "UNIX_UnixDirectoryFixture.h"
//#include "UNIX_SymbolicLinkFixture.h"
//#include "UNIX_BGPPathAttributesFixture.h"
//#include "UNIX_UnixFileFixture.h"
//#include "UNIX_RemoteFileSystemFixture.h"
//#include "UNIX_NFSFixture.h"
//#include "UNIX_DatabaseStorageAreaFixture.h"
//#include "UNIX_LocalFileSystemFixture.h"
//#include "UNIX_UnixLocalFileSystemFixture.h"
//#include "UNIX_ApplicationSystemFixture.h"
//#include "UNIX_DatabaseSystemFixture.h"
//#include "UNIX_VirtualComputerSystemFixture.h"
//#include "UNIX_UnitaryComputerSystemFixture.h"
//#include "UNIX_ClusterFixture.h"
//#include "UNIX_StorageLibraryFixture.h"
//#include "UNIX_ReusablePolicyContainerFixture.h"
//#include "UNIX_RoutingProtocolDomainFixture.h"
//#include "UNIX_OSPFAreaFixture.h"
//#include "UNIX_NetworkFixture.h"
//#include "UNIX_PolicyRepositoryFixture.h"
//#include "UNIX_AutonomousSystemFixture.h"
//#include "UNIX_DMAFixture.h"
//#include "UNIX_MemoryResourceFixture.h"
//#include "UNIX_PortResourceFixture.h"
//#include "UNIX_IRQFixture.h"
//#include "UNIX_UnixProcessFixture.h"
//#include "UNIX_MessageLogFixture.h"
//#include "UNIX_DiagnosticLogFixture.h"
//#include "UNIX_DiagnosticsLogFixture.h"
//#include "UNIX_OperatingSystemFixture.h"
#include "UNIX_AccountFixture.h"
//#include "UNIX_JobQueueFixture.h"
//#include "UNIX_PrintQueueFixture.h"
//#include "UNIX_UnixThreadFixture.h"
//#include "UNIX_CommonDatabaseFixture.h"
//#include "UNIX_LogicalModuleFixture.h"
//#include "UNIX_PassThroughModuleFixture.h"
//#include "UNIX_LabelReaderFixture.h"
//#include "UNIX_ScannerFixture.h"
//#include "UNIX_ProtocolControllerFixture.h"
//#include "UNIX_SCSIProtocolControllerFixture.h"
//#include "UNIX_WiFiRadioFixture.h"
//#include "UNIX_HeatPipeFixture.h"
//#include "UNIX_RefrigerationFixture.h"
//#include "UNIX_FanFixture.h"
//#include "UNIX_PowerSourceFixture.h"
//#include "UNIX_DesktopMonitorFixture.h"
//#include "UNIX_FlatPanelFixture.h"
//#include "UNIX_KeyboardFixture.h"
//#include "UNIX_PointingDeviceFixture.h"
//#include "UNIX_CableModemFixture.h"
//#include "UNIX_SDSLModemFixture.h"
//#include "UNIX_HDSLModemFixture.h"
//#include "UNIX_VDSLModemFixture.h"
//#include "UNIX_ADSLModemFixture.h"
//#include "UNIX_POTSModemFixture.h"
//#include "UNIX_UnimodemFixture.h"
//#include "UNIX_ISDNModemFixture.h"
//#include "UNIX_FibrePortFixture.h"
//#include "UNIX_FCPortFixture.h"
//#include "UNIX_EthernetPortFixture.h"
//#include "UNIX_LLDPEthernetPortFixture.h"
//#include "UNIX_WiFiPortFixture.h"
//#include "UNIX_TokenRingPortFixture.h"
//#include "UNIX_PCIPortFixture.h"
//#include "UNIX_USBPortFixture.h"
//#include "UNIX_DisketteDriveFixture.h"
//#include "UNIX_MagnetoOpticalDriveFixture.h"
//#include "UNIX_DiskDriveFixture.h"
//#include "UNIX_CDROMDriveFixture.h"
//#include "UNIX_TapeDriveFixture.h"
//#include "UNIX_WORMDriveFixture.h"
//#include "UNIX_DVDDriveFixture.h"
//#include "UNIX_PowerSupplyFixture.h"
//#include "UNIX_UninterruptiblePowerSupplyFixture.h"
//#include "UNIX_DiscreteSensorFixture.h"
//#include "UNIX_MultiStateSensorFixture.h"
//#include "UNIX_TemperatureSensorFixture.h"
//#include "UNIX_VoltageSensorFixture.h"
//#include "UNIX_CurrentSensorFixture.h"
//#include "UNIX_TachometerFixture.h"
//#include "UNIX_BinarySensorFixture.h"
//#include "UNIX_USBDeviceFixture.h"
//#include "UNIX_USBHubFixture.h"
//#include "UNIX_LimitedAccessPortFixture.h"
//#include "UNIX_PickerElementFixture.h"
//#include "UNIX_InterLibraryPortFixture.h"
//#include "UNIX_ChangerDeviceFixture.h"
//#include "UNIX_DoorFixture.h"
//#include "UNIX_PCIBridgeFixture.h"
//#include "UNIX_PCIeSwitchFixture.h"
//#include "UNIX_PCVideoControllerFixture.h"
//#include "UNIX_AGPVideoControllerFixture.h"
//#include "UNIX_ManagementControllerFixture.h"
//#include "UNIX_DisplayControllerFixture.h"
//#include "UNIX_PCMCIAControllerFixture.h"
//#include "UNIX_PortControllerFixture.h"
//#include "UNIX_SerialControllerFixture.h"
//#include "UNIX_ESCONControllerFixture.h"
//#include "UNIX_SSAControllerFixture.h"
//#include "UNIX_ParallelControllerFixture.h"
//#include "UNIX_SCSIControllerFixture.h"
//#include "UNIX_InfraredControllerFixture.h"
//#include "UNIX_USBControllerFixture.h"
//#include "UNIX_IDEControllerFixture.h"
//#include "UNIX_BatteryFixture.h"
//#include "UNIX_PrinterFixture.h"
//#include "UNIX_AlarmDeviceFixture.h"
//#include "UNIX_StorageVolumeFixture.h"
//#include "UNIX_VolumeSetFixture.h"
//#include "UNIX_LogicalDiskFixture.h"
//#include "UNIX_PhysicalExtentFixture.h"
//#include "UNIX_VolatileStorageFixture.h"
//#include "UNIX_NonVolatileStorageFixture.h"
//#include "UNIX_CacheMemoryFixture.h"
//#include "UNIX_DatabaseSegmentFixture.h"
//#include "UNIX_OpaqueManagementDataFixture.h"
//#include "UNIX_AggregatePSExtentFixture.h"
//#include "UNIX_SnapshotFixture.h"
//#include "UNIX_AggregatePExtentFixture.h"
//#include "UNIX_TapePartitionFixture.h"
//#include "UNIX_DiskPartitionFixture.h"
//#include "UNIX_CompositeExtentFixture.h"
//#include "UNIX_ProtectedSpaceExtentFixture.h"
//#include "UNIX_WatchdogFixture.h"
//#include "UNIX_IndicatorLEDFixture.h"
//#include "UNIX_ProcessorFixture.h"
//#include "UNIX_FibreChannelAdapterFixture.h"
//#include "UNIX_TokenRingAdapterFixture.h"
//#include "UNIX_EthernetAdapterFixture.h"
//#include "UNIX_VideoHeadFixture.h"
//#include "UNIX_KVMRedirectionSAPFixture.h"
//#include "UNIX_CredentialManagementSAPFixture.h"
//#include "UNIX_IPNetworkConnectionFixture.h"
//#include "UNIX_PrintSAPFixture.h"
//#include "UNIX_USBRedirectionSAPFixture.h"
//#include "UNIX_TextRedirectionSAPFixture.h"
//#include "UNIX_VLANFixture.h"
//#include "UNIX_BootSAPFixture.h"
//#include "UNIX_ClusteringSAPFixture.h"
//#include "UNIX_ServiceAccessURIFixture.h"
//#include "UNIX_LaunchInContextSAPFixture.h"
//#include "UNIX_RemotePortFixture.h"
//#include "UNIX_MediaRedirectionSAPFixture.h"
//#include "UNIX_ObjectManagerCommunicationMechanismFixture.h"
//#include "UNIX_CIMXMLCommunicationMechanismFixture.h"
//#include "UNIX_VLANEndpointFixture.h"
//#include "UNIX_SwitchPortFixture.h"
//#include "UNIX_IPXProtocolEndpointFixture.h"
//#include "UNIX_CLPProtocolEndpointFixture.h"
//#include "UNIX_SSHProtocolEndpointFixture.h"
//#include "UNIX_BGPProtocolEndpointFixture.h"
//#include "UNIX_DNSProtocolEndpointFixture.h"
//#include "UNIX_IPProtocolEndpointFixture.h"
//#include "UNIX_DHCPProtocolEndpointFixture.h"
//#include "UNIX_LANEndpointFixture.h"
//#include "UNIX_WiFiEndpointFixture.h"
//#include "UNIX_IKESAEndpointFixture.h"
//#include "UNIX_IPsecSAEndpointFixture.h"
//#include "UNIX_SCSIProtocolEndpointFixture.h"
//#include "UNIX_iSCSIProtocolEndpointFixture.h"
//#include "UNIX_TCPProtocolEndpointFixture.h"
//#include "UNIX_OSPFVirtualInterfaceFixture.h"
//#include "UNIX_OSPFProtocolEndpointFixture.h"
//#include "UNIX_UDPProtocolEndpointFixture.h"
//#include "UNIX_iSCSIConnectionFixture.h"
//#include "UNIX_iSCSISessionFixture.h"
//#include "UNIX_ProcessorCoreFixture.h"
//#include "UNIX_HardwareThreadFixture.h"
//#include "UNIX_ResourcePoolConfigurationServiceFixture.h"
//#include "UNIX_PrintServiceFixture.h"
//#include "UNIX_ControllerConfigurationServiceFixture.h"
//#include "UNIX_ZoneServiceFixture.h"
//#include "UNIX_ProtocolServiceFixture.h"
//#include "UNIX_VirtualSystemManagementServiceFixture.h"
//#include "UNIX_LaunchInContextServiceFixture.h"
//#include "UNIX_DropThresholdCalculationServiceFixture.h"
//#include "UNIX_IBSubnetManagerFixture.h"
//#include "UNIX_REDDropperServiceFixture.h"
//#include "UNIX_WeightedREDDropperServiceFixture.h"
//#include "UNIX_HeadTailDropperFixture.h"
//#include "UNIX_QueuingServiceFixture.h"
//#include "UNIX_PacketSchedulingServiceFixture.h"
//#include "UNIX_NonWorkConservingSchedulingServiceFixture.h"
//#include "UNIX_ToSMarkerServiceFixture.h"
//#include "UNIX_Priority8021QMarkerServiceFixture.h"
//#include "UNIX_PreambleMarkerServiceFixture.h"
//#include "UNIX_DSCPMarkerServiceFixture.h"
//#include "UNIX_ClassifierServiceFixture.h"
//#include "UNIX_ClassifierElementFixture.h"
//#include "UNIX_TokenBucketMeterServiceFixture.h"
//#include "UNIX_EWMAMeterServiceFixture.h"
//#include "UNIX_AverageRateMeterServiceFixture.h"
//#include "UNIX_PowerManagementServiceFixture.h"
//#include "UNIX_BIOSServiceFixture.h"
//#include "UNIX_EFServiceFixture.h"
//#include "UNIX_AFServiceFixture.h"
//#include "UNIX_FlowServiceFixture.h"
//#include "UNIX_Hdr8021PServiceFixture.h"
//#include "UNIX_PrecedenceServiceFixture.h"
//#include "UNIX_HelpServiceFixture.h"
//#include "UNIX_SCSIPathConfigurationServiceFixture.h"
//#include "UNIX_SourceRoutingServiceFixture.h"
//#include "UNIX_SpanningTreeServiceFixture.h"
//#include "UNIX_TransparentBridgingServiceFixture.h"
//#include "UNIX_SwitchServiceFixture.h"
//#include "UNIX_BGPServiceFixture.h"
//#include "UNIX_OSPFServiceFixture.h"
//#include "UNIX_SharedDeviceManagementServiceFixture.h"
//#include "UNIX_VirtualSystemSnapshotServiceFixture.h"
//#include "UNIX_OOBAlertServiceFixture.h"
//#include "UNIX_USBRedirectionServiceFixture.h"
//#include "UNIX_TextRedirectionServiceFixture.h"
//#include "UNIX_ObjectManagerFixture.h"
//#include "UNIX_ProtocolAdapterFixture.h"
//#include "UNIX_ObjectManagerAdapterFixture.h"
//#include "UNIX_FibreProtocolServiceFixture.h"
//#include "UNIX_AccountManagementServiceFixture.h"
//#include "UNIX_VerificationServiceFixture.h"
//#include "UNIX_IdentityManagementServiceFixture.h"
//#include "UNIX_StorageHardwareIDManagementServiceFixture.h"
//#include "UNIX_CertificateAuthorityFixture.h"
//#include "UNIX_SharedSecretServiceFixture.h"
//#include "UNIX_PublicKeyManagementServiceFixture.h"
//#include "UNIX_KeyBasedCredentialManagementServiceFixture.h"
//#include "UNIX_CertificateManagementServiceFixture.h"
//#include "UNIX_NotaryFixture.h"
//#include "UNIX_KerberosKeyDistributionCenterFixture.h"
//#include "UNIX_AuthorizationServiceFixture.h"
//#include "UNIX_PrivilegeManagementServiceFixture.h"
//#include "UNIX_RoleBasedAuthorizationServiceFixture.h"
//#include "UNIX_PlatformWatchdogServiceFixture.h"
//#include "UNIX_ClusteringServiceFixture.h"
//#include "UNIX_MetricServiceFixture.h"
//#include "UNIX_StorageConfigurationServiceFixture.h"
//#include "UNIX_ConfigurationReportingServiceFixture.h"
//#include "UNIX_IPConfigurationServiceFixture.h"
//#include "UNIX_IndicationServiceFixture.h"
//#include "UNIX_SoftwareInstallationServiceFixture.h"
//#include "UNIX_DiagnosticServiceFixture.h"
//#include "UNIX_DiagnosticTestFixture.h"
//#include "UNIX_TimeServiceFixture.h"
//#include "UNIX_PowerUtilizationManagementServiceFixture.h"
//#include "UNIX_StatisticsServiceFixture.h"
//#include "UNIX_BlockStatisticsServiceFixture.h"
//#include "UNIX_VLANServiceFixture.h"
//#include "UNIX_Specific802dot1QVLANServiceFixture.h"
//#include "UNIX_WakeUpServiceFixture.h"
//#include "UNIX_OpaqueManagementDataServiceFixture.h"
//#include "UNIX_DatabaseServiceFixture.h"
//#include "UNIX_BootServiceFixture.h"
//#include "UNIX_NetworkPortConfigurationServiceFixture.h"
//#include "UNIX_WiFiPortConfigurationServiceFixture.h"
//#include "UNIX_PrintMarkerFixture.h"
//#include "UNIX_PrintSupplyFixture.h"
//#include "UNIX_PrintInterpreterFixture.h"
//#include "UNIX_PrintInputTrayFixture.h"
//#include "UNIX_RoutingPolicyFixture.h"
//#include "UNIX_X509CredentialFilterEntryFixture.h"
//#include "UNIX_FilterEntryFixture.h"
//#include "UNIX_PreambleFilterFixture.h"
//#include "UNIX_PeerIDPayloadFilterEntryFixture.h"
//#include "UNIX_Hdr8021FilterFixture.h"
//#include "UNIX_IPSOFilterEntryFixture.h"
//#include "UNIX_IPHeadersFilterFixture.h"
//#include "UNIX_StaticForwardingEntryFixture.h"
//#include "UNIX_SoftwareIdentityFixture.h"
//#include "UNIX_SoftwareElementFixture.h"
//#include "UNIX_VideoBIOSElementFixture.h"
//#include "UNIX_BIOSElementFixture.h"
//#include "UNIX_ResourcePoolFixture.h"
//#include "UNIX_BGPIPRouteFixture.h"
//#include "UNIX_AdministrativeDistanceFixture.h"
//#include "UNIX_DynamicForwardingEntryFixture.h"
//#include "UNIX_SpareGroupFixture.h"
//#include "UNIX_StorageRedundancyGroupFixture.h"
//#include "UNIX_ExtraCapacityGroupFixture.h"
//#include "UNIX_BGPAttributesFixture.h"
//#include "UNIX_FilterListFixture.h"
//#include "UNIX_BIOSFeatureFixture.h"
//#include "UNIX_AGPSoftwareFeatureFixture.h"
//#include "UNIX_VideoBIOSFeatureFixture.h"
//#include "UNIX_OSPFAreaConfigurationFixture.h"
//#include "UNIX_OtherRoleInformationFixture.h"
//#include "UNIX_OtherPersonInformationFixture.h"
//#include "UNIX_LocationFixture.h"
//#include "UNIX_TraceLevelTypeFixture.h"
//#include "UNIX_AggregationMetricDefinitionFixture.h"
//#include "UNIX_MetricDefinitionFixture.h"
//#include "UNIX_ListenerDestinationWSManagementFixture.h"
//#include "UNIX_IndicationHandlerCIMXMLFixture.h"
//#include "UNIX_ListenerDestinationCIMXMLFixture.h"
//#include "UNIX_SystemIdentificationFixture.h"
//#include "UNIX_BlockStatisticsManifestFixture.h"
//#include "UNIX_IKEProposalFixture.h"
//#include "UNIX_IPsecProposalFixture.h"
//#include "UNIX_DatabaseParameterFixture.h"
//#include "UNIX_DatabaseSegmentSettingDataFixture.h"
//#include "UNIX_IPCOMPTransformFixture.h"
//#include "UNIX_ESPTransformFixture.h"
//#include "UNIX_AHTransformFixture.h"
//#include "UNIX_FileSystemSettingDataFixture.h"
//#include "UNIX_ExtendedStaticIPAssignmentSettingDataFixture.h"
//#include "UNIX_DHCPSettingDataFixture.h"
//#include "UNIX_DNSGeneralSettingDataFixture.h"
//#include "UNIX_DNSSettingDataFixture.h"
//#include "UNIX_StaticIPAssignmentSettingDataFixture.h"
//#include "UNIX_iSCSISessionSettingsFixture.h"
//#include "UNIX_DiagnosticSettingDataFixture.h"
//#include "UNIX_StatisticalSettingFixture.h"
//#include "UNIX_StorageSettingFixture.h"
//#include "UNIX_StorageSettingWithHintsFixture.h"
//#include "UNIX_EthernetPortAllocationSettingDataFixture.h"
//#include "UNIX_ProcessorAllocationSettingDataFixture.h"
//#include "UNIX_PowerAllocationSettingDataFixture.h"
//#include "UNIX_StorageAllocationSettingDataFixture.h"
//#include "UNIX_BootConfigSettingFixture.h"
//#include "UNIX_SSHSettingDataFixture.h"
//#include "UNIX_IndicationServiceSettingDataFixture.h"
//#include "UNIX_VirtualSystemSettingDataFixture.h"
//#include "UNIX_VirtualEthernetSwitchSettingDataFixture.h"
//#include "UNIX_IEEE8021xSettingsFixture.h"
//#include "UNIX_VLANEndpointSettingDataFixture.h"
//#include "UNIX_LogicalPortSettingsFixture.h"
//#include "UNIX_StorageClientSettingDataFixture.h"
//#include "UNIX_VirtualSystemMigrationSettingDataFixture.h"
//#include "UNIX_VideoHeadResolutionFixture.h"
//#include "UNIX_BootSettingDataFixture.h"
//#include "UNIX_CLPSettingDataFixture.h"
//#include "UNIX_WiFiNetworkDetectionSettingsFixture.h"
//#include "UNIX_SCSIMultipathSettingsFixture.h"
//#include "UNIX_CommonDatabaseSettingDataFixture.h"
//#include "UNIX_WiFiEndpointSettingsFixture.h"
//#include "UNIX_iSCSIConnectionSettingsFixture.h"
//#include "UNIX_AccountSettingDataFixture.h"
//#include "UNIX_ConnectivityMembershipSettingDataFixture.h"
//#include "UNIX_ZoneMembershipSettingDataFixture.h"
//#include "UNIX_BootSourceSettingFixture.h"
//#include "UNIX_SAEndpointRefreshSettingsFixture.h"
//#include "UNIX_IPVersionSettingDataFixture.h"
//#include "UNIX_JobSettingDataFixture.h"
//#include "UNIX_FCSwitchSettingsFixture.h"
//#include "UNIX_IndicationFilterFixture.h"
//#include "UNIX_OtherOrgUnitInformationFixture.h"
//#include "UNIX_MethodParametersFixture.h"
//#include "UNIX_ConfigurationCapacityFixture.h"
//#include "UNIX_MemoryCapacityFixture.h"
//#include "UNIX_KerberosCredentialFixture.h"
//#include "UNIX_KerberosTicketFixture.h"
//#include "UNIX_NamedCredentialFixture.h"
//#include "UNIX_PublicKeyCertificateFixture.h"
//#include "UNIX_X509CRLFixture.h"
//#include "UNIX_X509CertificateFixture.h"
//#include "UNIX_NamedSharedIKESecretFixture.h"
//#include "UNIX_SharedSecretFixture.h"
//#include "UNIX_UnsignedPublicKeyFixture.h"
//#include "UNIX_SharedCredentialFixture.h"
//#include "UNIX_UnsignedCredentialFixture.h"
//#include "UNIX_MediaAccessStatDataFixture.h"
//#include "UNIX_PickerStatDataFixture.h"
//#include "UNIX_DatabaseServiceStatisticsFixture.h"
//#include "UNIX_FCPortStatisticsFixture.h"
//#include "UNIX_TokenRingPortStatisticsFixture.h"
//#include "UNIX_EthernetPortStatisticsFixture.h"
//#include "UNIX_LLDPEthernetPortStatisticsFixture.h"
//#include "UNIX_BlockStorageStatisticalDataFixture.h"
//#include "UNIX_SAEndpointConnectionStatisticsFixture.h"
//#include "UNIX_iSCSILoginStatisticsFixture.h"
//#include "UNIX_iSCSISessionFailuresFixture.h"
//#include "UNIX_FCPortRateStatisticsFixture.h"
//#include "UNIX_MediaPhysicalStatDataFixture.h"
//#include "UNIX_DatabaseResourceStatisticsFixture.h"
//#include "UNIX_StatisticalRuntimeOverviewFixture.h"
//#include "UNIX_DeviceErrorDataFixture.h"
//#include "UNIX_BGPEndpointStatisticsFixture.h"
//#include "UNIX_CommonDatabaseStatisticsFixture.h"
//#include "UNIX_CIMOMStatisticalDataFixture.h"
//#include "UNIX_LabelReaderStatDataFixture.h"
//#include "UNIX_StorageHardwareIDFixture.h"
//#include "UNIX_GatewayPathIDFixture.h"
//#include "UNIX_IPNetworkIdentityFixture.h"
//#include "UNIX_CredentialStoreFixture.h"
//#include "UNIX_KeystoreFixture.h"
//#include "UNIX_RangeOfIPAddressesFixture.h"
//#include "UNIX_StatisticsCollectionFixture.h"
//#include "UNIX_BlockStatisticsManifestCollectionFixture.h"
//#include "UNIX_LogicalPortGroupFixture.h"
//#include "UNIX_PCIPortGroupFixture.h"
//#include "UNIX_NamedAddressCollectionFixture.h"
//#include "UNIX_ZoneSetFixture.h"
//#include "UNIX_OSPFLinkFixture.h"
//#include "UNIX_IPXConnectivityNetworkFixture.h"
//#include "UNIX_LANConnectivitySegmentFixture.h"
//#include "UNIX_IPConnectivitySubnetFixture.h"
//#include "UNIX_ZoneFixture.h"
//#include "UNIX_NetworkVLANFixture.h"
//#include "UNIX_PolicyRoleCollectionFixture.h"
//#include "UNIX_RedundancySetFixture.h"
//#include "UNIX_StorageRedundancySetFixture.h"
//#include "UNIX_SCSITargetPortGroupFixture.h"
//#include "UNIX_ProfileFixture.h"
//#include "UNIX_GroupFixture.h"
//#include "UNIX_FilterCollectionFixture.h"
//#include "UNIX_ReplacementSetFixture.h"
//#include "UNIX_RoleFixture.h"
//#include "UNIX_InstalledProductFixture.h"
//#include "UNIX_ConcreteCollectionFixture.h"
//#include "UNIX_BGPClusterFixture.h"
//#include "UNIX_DiskGroupFixture.h"
//#include "UNIX_LANSegmentFixture.h"
//#include "UNIX_IPXNetworkFixture.h"
//#include "UNIX_IPSubnetFixture.h"
//#include "UNIX_BufferPoolFixture.h"
//#include "UNIX_BGPPeerGroupFixture.h"
//#include "UNIX_IPAddressRangeFixture.h"
//#include "UNIX_BIOSStringFixture.h"
//#include "UNIX_BIOSIntegerFixture.h"
//#include "UNIX_BIOSPasswordFixture.h"
//#include "UNIX_BIOSEnumerationFixture.h"
//#include "UNIX_MethodResultFixture.h"
//#include "UNIX_UsersAccessFixture.h"
//#include "UNIX_UserContactFixture.h"
//#include "UNIX_PersonFixture.h"
//#include "UNIX_OrganizationFixture.h"
//#include "UNIX_OrgUnitFixture.h"
//#include "UNIX_SecuritySensitivityFixture.h"
//#include "UNIX_PhysicalStatisticalInformationFixture.h"
//#include "UNIX_MediaPhysicalStatInfoFixture.h"
//#include "UNIX_LabelReaderStatInfoFixture.h"
//#include "UNIX_FCAdapterEventCountersFixture.h"
//#include "UNIX_FibrePortEventCountersFixture.h"
//#include "UNIX_PickerStatInfoFixture.h"
//#include "UNIX_MediaAccessStatInfoFixture.h"
//#include "UNIX_SystemStatisticalInformationFixture.h"
//#include "UNIX_DeviceErrorCountsFixture.h"
//#include "UNIX_SpanningTreeStatisticsFixture.h"
//#include "UNIX_TransparentBridgingStatisticsFixture.h"
//#include "UNIX_BGPStatisticsFixture.h"
//#include "UNIX_SwitchPortStatisticsFixture.h"
//#include "UNIX_SwitchPortTransparentBridgingStatisticsFixture.h"
//#include "UNIX_SwitchPortSourceRoutingStatisticsFixture.h"
//#include "UNIX_SwitchPortSpanningTreeStatisticsFixture.h"
//#include "UNIX_UnixProcessStatisticalInformationFixture.h"
//#include "UNIX_DiagnosticServiceRecordFixture.h"
//#include "UNIX_DiagnosticCompletionRecordFixture.h"
//#include "UNIX_DiagnosticSettingDataRecordFixture.h"
//#include "UNIX_DiagnosticSettingRecordFixture.h"
//#include "UNIX_LogRecordFixture.h"
//#include "UNIX_LogEntryFixture.h"
//#include "UNIX_PrioritySchedulingElementFixture.h"
//#include "UNIX_BoundedPrioritySchedulingElementFixture.h"
//#include "UNIX_AllocationSchedulingElementFixture.h"
//#include "UNIX_WRRSchedulingElementFixture.h"
//#include "UNIX_NamespaceFixture.h"
//#include "UNIX_NextHopRouteFixture.h"
//#include "UNIX_NextHopIPRouteFixture.h"
//#include "UNIX_USBRedirectionCapabilitiesFixture.h"
//#include "UNIX_MediaRedirectionCapabilitiesFixture.h"
//#include "UNIX_BootServiceCapabilitiesFixture.h"
//#include "UNIX_OpaqueManagementDataCapabilitiesFixture.h"
//#include "UNIX_PlatformWatchdogServiceCapabilitiesFixture.h"
//#include "UNIX_AlarmDeviceCapabilitiesFixture.h"
//#include "UNIX_FCSwitchCapabilitiesFixture.h"
//#include "UNIX_IndicatorLEDCapabilitiesFixture.h"
//#include "UNIX_RecordLogCapabilitiesFixture.h"
//#include "UNIX_MetricServiceCapabilitiesFixture.h"
//#include "UNIX_DHCPCapabilitiesFixture.h"
//#include "UNIX_OperatingSystemCapabilitiesFixture.h"
//#include "UNIX_WiFiEndpointCapabilitiesFixture.h"
//#include "UNIX_NetworkPortCapabilitiesFixture.h"
//#include "UNIX_WiFiPortCapabilitiesFixture.h"
//#include "UNIX_FCPortCapabilitiesFixture.h"
//#include "UNIX_VirtualSystemManagementCapabilitiesFixture.h"
//#include "UNIX_ProcessorCapabilitiesFixture.h"
//#include "UNIX_LaunchInContextCapabilitiesFixture.h"
//#include "UNIX_AccountManagementCapabilitiesFixture.h"
//#include "UNIX_CLPCapabilitiesFixture.h"
//#include "UNIX_SSHCapabilitiesFixture.h"
//#include "UNIX_PowerUtilizationManagementCapabilitiesFixture.h"
//#include "UNIX_CredentialManagementCapabilitiesFixture.h"
//#include "UNIX_CertificateManagementCapabilitiesFixture.h"
//#include "UNIX_VLANEndpointCapabilitiesFixture.h"
//#include "UNIX_QueryCapabilitiesFixture.h"
//#include "UNIX_StorageReplicationCapabilitiesFixture.h"
//#include "UNIX_IEEE8021xCapabilitiesFixture.h"
//#include "UNIX_CommonDatabaseCapabilitiesFixture.h"
//#include "UNIX_BIOSServiceCapabilitiesFixture.h"
//#include "UNIX_StorageCapabilitiesFixture.h"
//#include "UNIX_OSPFServiceCapabilitiesFixture.h"
//#include "UNIX_ComputerSystemNodeCapabilitiesFixture.h"
//#include "UNIX_StatisticsCapabilitiesFixture.h"
//#include "UNIX_BlockStatisticsCapabilitiesFixture.h"
//#include "UNIX_PhysicalAssetCapabilitiesFixture.h"
//#include "UNIX_DeviceSharingCapabilitiesFixture.h"
//#include "UNIX_IndicationServiceCapabilitiesFixture.h"
//#include "UNIX_AllocationCapabilitiesFixture.h"
//#include "UNIX_LocalizationCapabilitiesFixture.h"
//#include "UNIX_SoftwareInstallationServiceCapabilitiesFixture.h"
//#include "UNIX_VirtualSystemSnapshotServiceCapabilitiesFixture.h"
//#include "UNIX_SCSIMultipathConfigurationCapabilitiesFixture.h"
//#include "UNIX_ZoneCapabilitiesFixture.h"
//#include "UNIX_iSCSICapabilitiesFixture.h"
//#include "UNIX_PowerManagementCapabilitiesFixture.h"
//#include "UNIX_DiagnosticServiceCapabilitiesFixture.h"
//#include "UNIX_FileSystemCapabilitiesFixture.h"
//#include "UNIX_VirtualSystemSnapshotCapabilitiesFixture.h"
//#include "UNIX_ResourcePoolConfigurationCapabilitiesFixture.h"
//#include "UNIX_PrivilegeManagementCapabilitiesFixture.h"
//#include "UNIX_RoleBasedManagementCapabilitiesFixture.h"
//#include "UNIX_StorageConfigurationCapabilitiesFixture.h"
//#include "UNIX_ProtocolControllerMaskingCapabilitiesFixture.h"
//#include "UNIX_PrivilegeFixture.h"
//#include "UNIX_AuthorizedPrivilegeFixture.h"
//#include "UNIX_InstReadFixture.h"
//#include "UNIX_InstModificationFixture.h"
//#include "UNIX_InstDeletionFixture.h"
//#include "UNIX_InstMethodCallFixture.h"
//#include "UNIX_InstCreationFixture.h"
//#include "UNIX_ClassCreationFixture.h"
//#include "UNIX_ClassDeletionFixture.h"
//#include "UNIX_ClassModificationFixture.h"
//#include "UNIX_AlertInstIndicationFixture.h"
//#include "UNIX_ThresholdIndicationFixture.h"
//#include "UNIX_ContainedProposalFixture.h"
//#include "UNIX_ContainedTransformFixture.h"
//#include "UNIX_SettingsDefineCapabilitiesFixture.h"
//#include "UNIX_ProductSoftwareComponentFixture.h"
//#include "UNIX_QoSConditioningSubServiceFixture.h"
//#include "UNIX_SwitchServiceSpanningTreeFixture.h"
//#include "UNIX_QoSSubServiceFixture.h"
//#include "UNIX_ClassifierElementInClassifierServiceFixture.h"
//#include "UNIX_SwitchServiceVLANFixture.h"
//#include "UNIX_SwitchServiceSourceRoutingFixture.h"
//#include "UNIX_SwitchServiceTransparentBridgingFixture.h"
//#include "UNIX_AccountOnSystemFixture.h"
//#include "UNIX_HostedResourcePoolFixture.h"
//#include "UNIX_ContainedDomainFixture.h"
//#include "UNIX_RoutingProtocolDomainInASFixture.h"
//#include "UNIX_InstalledOSFixture.h"
//#include "UNIX_HostedFileSystemFixture.h"
//#include "UNIX_ASBGPEndpointsFixture.h"
//#include "UNIX_RoutersInASFixture.h"
//#include "UNIX_ComponentCSFixture.h"
//#include "UNIX_SystemPartitionFixture.h"
//#include "UNIX_HostedStoragePoolFixture.h"
//#include "UNIX_FilterListInSystemFixture.h"
//#include "UNIX_ComputerSystemMemoryFixture.h"
//#include "UNIX_ComputerSystemProcessorFixture.h"
//#include "UNIX_PolicyRepositoryInPolicyRepositoryFixture.h"
//#include "UNIX_SystemBIOSFixture.h"
//#include "UNIX_ApplicationSystemSoftwareFeatureFixture.h"
//#include "UNIX_ComputerSystemIRQFixture.h"
//#include "UNIX_ComputerSystemMappedIOFixture.h"
//#include "UNIX_ComputerSystemDMAFixture.h"
//#include "UNIX_FilterEntryInSystemFixture.h"
//#include "UNIX_ConfederationFixture.h"
//#include "UNIX_PolicyContainerInPolicyContainerFixture.h"
//#include "UNIX_EndpointInAreaFixture.h"
//#include "UNIX_OSProcessFixture.h"
//#include "UNIX_ListsInRoutingPolicyFixture.h"
//#include "UNIX_ConcreteComponentFixture.h"
//#include "UNIX_ModulePortFixture.h"
//#include "UNIX_DirectoryContainsFileFixture.h"
//#include "UNIX_OrderedComponentFixture.h"
//#include "UNIX_EntriesInFilterListFixture.h"
//#include "UNIX_OperatingSystemSoftwareFeatureFixture.h"
//#include "UNIX_BGPServiceAttributesFixture.h"
//#include "UNIX_NetworkAdapterRedundancyComponentFixture.h"
//#include "UNIX_PExtentRedundancyComponentFixture.h"
//#include "UNIX_AggregateRedundancyComponentFixture.h"
//#include "UNIX_ProcessOfJobFixture.h"
//#include "UNIX_ContainedLocationFixture.h"
//#include "UNIX_PolicyGroupInPolicyGroupFixture.h"
//#include "UNIX_PolicyConditionInPolicyRuleFixture.h"
//#include "UNIX_PacketConditionInSARuleFixture.h"
//#include "UNIX_PolicyConditionInPolicyConditionFixture.h"
//#include "UNIX_PolicyActionInPolicyRuleFixture.h"
//#include "UNIX_PolicyActionInPolicyActionFixture.h"
//#include "UNIX_PolicySetComponentFixture.h"
//#include "UNIX_PolicyRuleValidityPeriodFixture.h"
//#include "UNIX_PolicyRuleInPolicyGroupFixture.h"
//#include "UNIX_PolicySetValidityPeriodFixture.h"
//#include "UNIX_AssociatedRemainingExtentFixture.h"
//#include "UNIX_FilteredBGPAttributesFixture.h"
//#include "UNIX_SoftwareElementComponentFixture.h"
//#include "UNIX_PrintJobFileFixture.h"
//#include "UNIX_BIOSFeatureBIOSElementsFixture.h"
//#include "UNIX_VideoBIOSFeatureVideoBIOSElementsFixture.h"
//#include "UNIX_ProductPhysicalComponentFixture.h"
//#include "UNIX_AssociatedComponentExtentFixture.h"
//#include "UNIX_VirtualSystemSettingDataComponentFixture.h"
//#include "UNIX_DatabaseFileFixture.h"
//#include "UNIX_ProductComponentFixture.h"
//#include "UNIX_CollectionOfSensorsFixture.h"
//#include "UNIX_DiagnosticTestInPackageFixture.h"
//#include "UNIX_ApplicationSystemHierarchyFixture.h"
//#include "UNIX_FileStorageFixture.h"
//#include "UNIX_LinkHasConnectorFixture.h"
//#include "UNIX_ConnectorOnPackageFixture.h"
//#include "UNIX_PackagedComponentFixture.h"
//#include "UNIX_MemoryOnCardFixture.h"
//#include "UNIX_CardOnCardFixture.h"
//#include "UNIX_ChassisInRackFixture.h"
//#include "UNIX_PackageInChassisFixture.h"
//#include "UNIX_NetworkPipeCompositionFixture.h"
//#include "UNIX_ProductServiceComponentFixture.h"
//#include "UNIX_SoftwareFeatureComponentFixture.h"
//#include "UNIX_ProductElementComponentFixture.h"
//#include "UNIX_DatabaseStorageFixture.h"
//#include "UNIX_ProcessThreadFixture.h"
//#include "UNIX_BGPRouteMapsInRoutingPolicyFixture.h"
//#include "UNIX_ElementInSchedulingServiceFixture.h"
//#include "UNIX_ConcreteIdentityFixture.h"
//#include "UNIX_FileIdentityFixture.h"
//#include "UNIX_NetworkVirtualAdapterFixture.h"
//#include "UNIX_DeviceIdentityFixture.h"
//#include "UNIX_AccountIdentityFixture.h"
//#include "UNIX_EndpointIdentityFixture.h"
//#include "UNIX_ElementSettingDataFixture.h"
//#include "UNIX_TransformOfSecurityAssociationFixture.h"
//#include "UNIX_ErrorCountersForDeviceFixture.h"
//#include "UNIX_SystemStatisticsFixture.h"
//#include "UNIX_ServiceStatisticsFixture.h"
//#include "UNIX_BGPServiceStatisticsFixture.h"
//#include "UNIX_DeviceStatisticsFixture.h"
//#include "UNIX_UnixProcessStatisticsFixture.h"
//#include "UNIX_SAPStatisticsFixture.h"
//#include "UNIX_PhysicalStatisticsFixture.h"
//#include "UNIX_EndpointInLinkFixture.h"
//#include "UNIX_MemberPrincipalFixture.h"
//#include "UNIX_ElementInPolicyRoleCollectionFixture.h"
//#include "UNIX_BGPPeerUsesRouteMapFixture.h"
//#include "UNIX_RoutersInBGPClusterFixture.h"
//#include "UNIX_DriveInDiskGroupFixture.h"
//#include "UNIX_InLogicalNetworkFixture.h"
//#include "UNIX_InSegmentFixture.h"
//#include "UNIX_InBGPPeerGroupFixture.h"
//#include "UNIX_ExtentInDiskGroupFixture.h"
//#include "UNIX_OrderedMemberOfCollectionFixture.h"
//#include "UNIX_CollectedSoftwareFeaturesFixture.h"
//#include "UNIX_CollectedSoftwareElementsFixture.h"
//#include "UNIX_PolicySetInRoleCollectionFixture.h"
//#include "UNIX_CollectedBufferPoolFixture.h"
//#include "UNIX_ClassifierElementUsesFilterListFixture.h"
//#include "UNIX_BIOSLoadedInNVFixture.h"
//#include "UNIX_LogInStorageFixture.h"
//#include "UNIX_UseOfLogFixture.h"
//#include "UNIX_UseOfMessageLogFixture.h"
//#include "UNIX_OperationLogFixture.h"
//#include "UNIX_FilterOfSecurityAssociationFixture.h"
//#include "UNIX_ElementAsUserFixture.h"
//#include "UNIX_MemoryWithMediaFixture.h"
//#include "UNIX_WakeUpServiceOnNetworkPortFixture.h"
//#include "UNIX_WakeUpServiceOnNetworkAdapterFixture.h"
//#include "UNIX_WakeUpServiceOnModemFixture.h"
//#include "UNIX_OOBAlertServiceOnNetworkPortFixture.h"
//#include "UNIX_OOBAlertServiceOnModemFixture.h"
//#include "UNIX_OOBAlertServiceOnNetworkAdapterFixture.h"
//#include "UNIX_AuthorizationSubjectFixture.h"
//#include "UNIX_DockedFixture.h"
//#include "UNIX_SoftwareFeatureSAPImplementationFixture.h"
//#include "UNIX_TransparentBridgingStaticForwardingFixture.h"
//#include "UNIX_ResidesOnExtentFixture.h"
//#include "UNIX_RemoteAccessAvailableToElementFixture.h"
//#include "UNIX_PeerGatewayForPreconfiguredTunnelFixture.h"
//#include "UNIX_AccessLabelReaderFixture.h"
//#include "UNIX_PickerLabelReaderFixture.h"
//#include "UNIX_ManagesAccountFixture.h"
//#include "UNIX_BootOSFromFSFixture.h"
//#include "UNIX_ApplicationSystemDependencyFixture.h"
//#include "UNIX_ElementViewFixture.h"
//#include "UNIX_RoutesBGPFixture.h"
//#include "UNIX_SecurityServiceUsesAccountFixture.h"
//#include "UNIX_LastAppliedSnapshotFixture.h"
//#include "UNIX_AllocatedFromStoragePoolFixture.h"
//#include "UNIX_AssociatedBatteryFixture.h"
//#include "UNIX_RunningOSFixture.h"
//#include "UNIX_ReferencedProfileFixture.h"
//#include "UNIX_SubProfileRequiresProfileFixture.h"
//#include "UNIX_ClassifierFilterSetFixture.h"
//#include "UNIX_RequireCredentialsFromFixture.h"
//#include "UNIX_PickerForChangerFixture.h"
//#include "UNIX_QueueHierarchyFixture.h"
//#include "UNIX_EGPRouteCalcDependencyFixture.h"
//#include "UNIX_SchedulerUsedFixture.h"
//#include "UNIX_RelatedSpanningTreeFixture.h"
//#include "UNIX_CalculationBasedOnQueueFixture.h"
//#include "UNIX_ServiceUsesSecurityServiceFixture.h"
//#include "UNIX_CalculationServiceForDropperFixture.h"
//#include "UNIX_SecurityServiceForSystemFixture.h"
//#include "UNIX_ManagesAccountOnSystemFixture.h"
//#include "UNIX_DiagnosticTestForMSEFixture.h"
//#include "UNIX_MoreGroupInfoFixture.h"
//#include "UNIX_SparedFixture.h"
//#include "UNIX_QueueAllocationFixture.h"
//#include "UNIX_AssociatedProcessorMemoryFixture.h"
//#include "UNIX_AssociatedCacheMemoryFixture.h"
//#include "UNIX_SystemAdministratorRoleFixture.h"
//#include "UNIX_ElementInConnectorFixture.h"
//#include "UNIX_PackageInConnectorFixture.h"
//#include "UNIX_PackageInSlotFixture.h"
//#include "UNIX_CardInSlotFixture.h"
//#include "UNIX_AcceptCredentialFromFixture.h"
//#include "UNIX_CommMechanismForObjectManagerAdapterFixture.h"
//#include "UNIX_ElementSoftwareIdentityFixture.h"
//#include "UNIX_MoreOrgUnitInfoFixture.h"
//#include "UNIX_HostedNetworkPipeFixture.h"
//#include "UNIX_HostedFilterListFixture.h"
//#include "UNIX_HostedACIFixture.h"
//#include "UNIX_HostedRoutingServicesFixture.h"
//#include "UNIX_HostedClusterServiceFixture.h"
//#include "UNIX_HostedForwardingServicesFixture.h"
//#include "UNIX_HostedBootServiceFixture.h"
//#include "UNIX_SharingDependencyFixture.h"
//#include "UNIX_HostedJobDestinationFixture.h"
//#include "UNIX_HostedBGPPeerGroupFixture.h"
//#include "UNIX_NetworkServicesInAdminDomainFixture.h"
//#include "UNIX_HostedBGPRouteMapFixture.h"
//#include "UNIX_ScopedSettingFixture.h"
//#include "UNIX_HostedClusterSAPFixture.h"
//#include "UNIX_HostedBootSAPFixture.h"
//#include "UNIX_HostedBGPAttributesFixture.h"
//#include "UNIX_HostedAuthenticationRequirementFixture.h"
//#include "UNIX_SettingForSystemFixture.h"
//#include "UNIX_HostedFilterEntryBaseFixture.h"
//#include "UNIX_ConfigurationForSystemFixture.h"
//#include "UNIX_PolicyRuleInSystemFixture.h"
//#include "UNIX_PolicyGroupInSystemFixture.h"
//#include "UNIX_PolicyActionInPolicyRepositoryFixture.h"
//#include "UNIX_ReusablePolicyFixture.h"
//#include "UNIX_PolicyConditionInPolicyRepositoryFixture.h"
//#include "UNIX_HostedRouteFixture.h"
//#include "UNIX_HostedCollectionFixture.h"
//#include "UNIX_PolicyRoleCollectionInSystemFixture.h"
//#include "UNIX_NamespaceInManagerFixture.h"
//#include "UNIX_DatabaseControlFileFixture.h"
//#include "UNIX_HostedAdminDistanceFixture.h"
//#include "UNIX_HostedRoutingPolicyFixture.h"
//#include "UNIX_HostingCSFixture.h"
//#include "UNIX_FibrePortOnFCAdapterFixture.h"
//#include "UNIX_USBPortOnHubFixture.h"
//#include "UNIX_PhysicalMediaInLocationFixture.h"
//#include "UNIX_QueueForPrintServiceFixture.h"
//#include "UNIX_OSPFServiceConfigurationFixture.h"
//#include "UNIX_DeviceSAPImplementationFixture.h"
//#include "UNIX_PortImplementsEndpointFixture.h"
//#include "UNIX_USBConnectionFixture.h"
//#include "UNIX_SerialInterfaceFixture.h"
//#include "UNIX_USBControllerHasHubFixture.h"
//#include "UNIX_SCSIInterfaceFixture.h"
//#include "UNIX_MountFixture.h"
//#include "UNIX_RouteForwardedByServiceFixture.h"
//#include "UNIX_ForwardedRoutesFixture.h"
//#include "UNIX_StorageSettingsAssociatedToCapabilitiesFixture.h"
//#include "UNIX_StorageSettingsGeneratedFromCapabilitiesFixture.h"
//#include "UNIX_TransparentBridgingDynamicForwardingFixture.h"
//#include "UNIX_MorePersonInfoFixture.h"
//#include "UNIX_ReflectorNonClientServiceFixture.h"
//#include "UNIX_SoftwareElementSAPImplementationFixture.h"
//#include "UNIX_MediaPresentFixture.h"
//#include "UNIX_RealizesPExtentFixture.h"
//#include "UNIX_RealizesDiskPartitionFixture.h"
//#include "UNIX_RealizesAggregatePExtentFixture.h"
//#include "UNIX_RealizedOnSideFixture.h"
//#include "UNIX_RealizesTapePartitionFixture.h"
//#include "UNIX_DeviceSoftwareFixture.h"
//#include "UNIX_SwitchPortStaticForwardingFixture.h"
//#include "UNIX_SystemAdministratorGroupFixture.h"
//#include "UNIX_LibraryPackageFixture.h"
//#include "UNIX_ComputerSystemPackageFixture.h"
//#include "UNIX_OrderedDependencyFixture.h"
//#include "UNIX_UsersAccountFixture.h"
//#include "UNIX_ResourceAllocationFromPoolFixture.h"
//#include "UNIX_SoftwareFeatureServiceImplementationFixture.h"
//#include "UNIX_SnapshotOfExtentFixture.h"
//#include "UNIX_SoftwareElementServiceImplementationFixture.h"
//#include "UNIX_ProcessExecutableFixture.h"
//#include "UNIX_AssociatedSupplyVoltageSensorFixture.h"
//#include "UNIX_AssociatedSupplyCurrentSensorFixture.h"
//#include "UNIX_JobDestinationJobsFixture.h"
//#include "UNIX_OwningPrintQueueFixture.h"
//#include "UNIX_IsSpareFixture.h"
//#include "UNIX_PrinterServicingJobFixture.h"
//#include "UNIX_BGPRoutingPolicyFixture.h"
//#include "UNIX_DatabaseAdministratorFixture.h"
//#include "UNIX_TrustHierarchyFixture.h"
//#include "UNIX_RangesOfConfigurationFixture.h"
//#include "UNIX_HeadTailDropQueueBindingFixture.h"
//#include "UNIX_DoorAccessToPhysicalElementFixture.h"
//#include "UNIX_IPsecPolicyForEndpointFixture.h"
//#include "UNIX_LogInDataFileFixture.h"
//#include "UNIX_ParticipatingCSFixture.h"
//#include "UNIX_AssociatedDatabaseSystemFixture.h"
//#include "UNIX_SnapshotOfVirtualSystemFixture.h"
//#include "UNIX_MetricForMEFixture.h"
//#include "UNIX_IdentificationOfManagedSystemFixture.h"
//#include "UNIX_IngressConditioningServiceOnEndpointFixture.h"
//#include "UNIX_SwitchPortSourceRoutingFixture.h"
//#include "UNIX_VLANForFixture.h"
//#include "UNIX_SwitchPortSpanningTreeFixture.h"
//#include "UNIX_CalculatesAmongFixture.h"
//#include "UNIX_RelatedTransparentBridgingServiceFixture.h"
//#include "UNIX_EgressConditioningServiceOnEndpointFixture.h"
//#include "UNIX_ForwardsAmongFixture.h"
//#include "UNIX_SwitchesAmongFixture.h"
//#include "UNIX_BGPAttributesForRouteFixture.h"
//#include "UNIX_EndpointOfNetworkPipeFixture.h"
//#include "UNIX_IKESecretIsNamedFixture.h"
//#include "UNIX_KDCIssuesKerberosTicketFixture.h"
//#include "UNIX_SharedSecretIsSharedFixture.h"
//#include "UNIX_LocallyManagedPublicKeyFixture.h"
//#include "UNIX_CASignsPublicKeyCertificateFixture.h"
//#include "UNIX_RouteUsesEndpointFixture.h"
//#include "UNIX_MetricDefForMEFixture.h"
//#include "UNIX_AllocatedResourceFixture.h"
//#include "UNIX_AllocatedDMAFixture.h"
//#include "UNIX_AuthenticationTargetFixture.h"
//#include "UNIX_FilterListsInBGPRouteMapFixture.h"
//#include "UNIX_MoreRoleInfoFixture.h"
//#include "UNIX_ElementsLinkedFixture.h"
//#include "UNIX_DiagnosticTestSoftwareFixture.h"
//#include "UNIX_FilterOfPacketConditionFixture.h"
//#include "UNIX_RuleThatGeneratedSAFixture.h"
//#include "UNIX_AdapterActiveConnectionFixture.h"
//#include "UNIX_MetricInstanceFixture.h"
//#include "UNIX_AssociatedIndicatorLEDFixture.h"
//#include "UNIX_AuthorizedUseFixture.h"
//#include "UNIX_HomeForMediaFixture.h"
//#include "UNIX_ReflectorServiceFixture.h"
//#include "UNIX_Phase1SAUsedForPhase2Fixture.h"
//#include "UNIX_LogicalDiskBasedOnVolumeFixture.h"
//#include "UNIX_LogicalDiskBasedOnVolumeSetFixture.h"
//#include "UNIX_LogicalDiskBasedOnPartitionFixture.h"
//#include "UNIX_ProtectedExtentBasedOnFixture.h"
//#include "UNIX_CompositeExtentBasedOnFixture.h"
//#include "UNIX_VolumeSetBasedOnPSExtentFixture.h"
//#include "UNIX_AggregatePSExtentBasedOnPExtentFixture.h"
//#include "UNIX_AggregatePSExtentBasedOnAggregatePExtentFixture.h"
//#include "UNIX_DiskPartitionBasedOnVolumeFixture.h"
//#include "UNIX_TapePartitionOnSurfaceFixture.h"
//#include "UNIX_PSExtentBasedOnPExtentFixture.h"
//#include "UNIX_PackageAlarmFixture.h"
//#include "UNIX_PackageTempSensorFixture.h"
//#include "UNIX_PackageCoolingFixture.h"
//#include "UNIX_DeviceAccessedByFileFixture.h"
//#include "UNIX_SwitchPortDynamicForwardingFixture.h"
//#include "UNIX_ConditioningServiceOnEndpointFixture.h"
//#include "UNIX_DoorAccessToDeviceFixture.h"
//#include "UNIX_LogInDeviceFileFixture.h"
//#include "UNIX_RecordAppliesToElementFixture.h"
//#include "UNIX_QueueForwardsToPrintSAPFixture.h"
//#include "UNIX_LibraryExchangeFixture.h"
//#include "UNIX_IPsecPolicyForSystemFixture.h"
//#include "UNIX_CommMechanismForAdapterFixture.h"
//#include "UNIX_ConcreteDependencyFixture.h"
//#include "UNIX_CalculatedRoutesFixture.h"
//#include "UNIX_PortActiveConnectionFixture.h"
//#include "UNIX_AssociatedAlarmFixture.h"
//#include "UNIX_TransformOfPreconfiguredActionFixture.h"
//#include "UNIX_UsersCredentialFixture.h"
//#include "UNIX_PublicPrivateKeyPairFixture.h"
//#include "UNIX_NotaryVerifiesBiometricFixture.h"
//#include "UNIX_AreaOfConfigurationFixture.h"
//#include "UNIX_BGPAdminDistanceFixture.h"
//#include "UNIX_PeerGatewayForTunnelFixture.h"
//#include "UNIX_ElementAllocatedFromPoolFixture.h"
//#include "UNIX_AuthenticateForUseFixture.h"
//#include "UNIX_DeviceServicesLocationFixture.h"
//#include "UNIX_PeerOfSAEndpointFixture.h"
//#include "UNIX_ProtocolControllerForUnitFixture.h"
//#include "UNIX_ProtocolControllerForPortFixture.h"
//#include "UNIX_ProtocolControllerAccessesUnitFixture.h"
//#include "UNIX_AssociatedProtocolControllerFixture.h"
//#include "UNIX_CAHasPublicCertificateFixture.h"
//#include "UNIX_InboundVLANFixture.h"
//#include "UNIX_ActiveConnectionFixture.h"
//#include "UNIX_SwitchableFixture.h"
//#include "UNIX_OutboundVLANFixture.h"
//#include "UNIX_EndpointForIPNetworkConnectionFixture.h"
//#include "UNIX_SwitchPortPairFixture.h"
//#include "UNIX_BGPPeerGroupServiceFixture.h"
//#include "UNIX_AuthorizationTargetFixture.h"
//#include "UNIX_ReflectorClientServiceFixture.h"
//#include "UNIX_SystemAdministratorFixture.h"
//#include "UNIX_MoreOrganizationInfoFixture.h"
//#include "UNIX_PrinterServicingQueueFixture.h"
//#include "UNIX_ProvidesEndpointFixture.h"
//#include "UNIX_CommMechanismForManagerFixture.h"
//#include "UNIX_ClusterServiceAccessBySAPFixture.h"
//#include "UNIX_BootServiceAccessBySAPFixture.h"
//#include "UNIX_AssociatedNextHopFixture.h"
//#include "UNIX_SuppliesPowerFixture.h"
//#include "UNIX_ConnectedToFixture.h"
//#include "UNIX_SlotInSlotFixture.h"
//#include "UNIX_AccountMapsToAccountFixture.h"
//#include "UNIX_AssociatedCoolingFixture.h"
//#include "UNIX_CollectionInSystemFixture.h"
//#include "UNIX_ReplaceableProductFRUFixture.h"
//#include "UNIX_ElementCapabilitiesFixture.h"
//#include "UNIX_ElementProfileFixture.h"
//#include "UNIX_AuthorizedTargetFixture.h"
//#include "UNIX_ErrorFixture.h"
//#include "UNIX_ProductFRUFixture.h"
//#include "UNIX_FromDirectorySpecificationFixture.h"
//#include "UNIX_RecordInLogFixture.h"
//#include "UNIX_CollectionSettingFixture.h"
//#include "UNIX_CollectionConfigurationFixture.h"
//#include "UNIX_SystemInNamespaceFixture.h"
//#include "UNIX_ElementCapacityFixture.h"
//#include "UNIX_ProductSoftwareFeaturesFixture.h"
//#include "UNIX_ProductParentChildFixture.h"
//#include "UNIX_StorageDefectFixture.h"
//#include "UNIX_CollectionInOrganizationFixture.h"
//#include "UNIX_ServiceAffectsElementFixture.h"
//#include "UNIX_FRUIncludesProductFixture.h"
//#include "UNIX_OwningCollectionElementFixture.h"
//#include "UNIX_SystemSettingContextFixture.h"
//#include "UNIX_ElementLocationFixture.h"
//#include "UNIX_ServiceAvailableToElementFixture.h"
//#include "UNIX_ActionSequenceFixture.h"
//#include "UNIX_DiagnosticResultForTestFixture.h"
//#include "UNIX_DiagnosticResultForMSEFixture.h"
//#include "UNIX_CompatibleProductFixture.h"
//#include "UNIX_SCSIInitiatorTargetLogicalUnitPathFixture.h"
//#include "UNIX_FRUIncludesSoftwareFeatureFixture.h"
//#include "UNIX_InstalledSoftwareIdentityFixture.h"
//#include "UNIX_InstalledSoftwareElementFixture.h"
//#include "UNIX_FibrePortActiveLoginFixture.h"
//#include "UNIX_CollectedCollectionsFixture.h"
//#include "UNIX_ElementConfigurationFixture.h"
//#include "UNIX_CorrespondingSettingDataRecordFixture.h"
//#include "UNIX_AffectedJobElementFixture.h"
//#include "UNIX_NetworksInAdminDomainFixture.h"
//#include "UNIX_OwningJobElementFixture.h"
//#include "UNIX_ToDirectoryActionFixture.h"
//#include "UNIX_SAPAvailableForElementFixture.h"
//#include "UNIX_DiagnosticResultInPackageFixture.h"
//#include "UNIX_RelatedStatisticsFixture.h"
//#include "UNIX_BGPClustersInASFixture.h"
//#include "UNIX_CredentialContextFixture.h"
//#include "UNIX_FromDirectoryActionFixture.h"
//#include "UNIX_AFRelatedServicesFixture.h"
//#include "UNIX_RoleLimitedToTargetFixture.h"
//#include "UNIX_ActsAsSpareFixture.h"
//#include "UNIX_OrgStructureFixture.h"
//#include "UNIX_AssociatedJobMethodResultFixture.h"
//#include "UNIX_SettingContextFixture.h"
//#include "UNIX_FRUPhysicalElementsFixture.h"
//#include "UNIX_ElementStatisticalDataFixture.h"
//#include "UNIX_NextServiceFixture.h"
//#include "UNIX_LogicalNetworkServiceFixture.h"
//#include "UNIX_ElementSettingFixture.h"
//#include "UNIX_DependencyContextFixture.h"
//#include "UNIX_ProductSupportFixture.h"
//#include "UNIX_RelatedStatisticalDataFixture.h"
//#include "UNIX_ElementSecuritySensitivityFixture.h"
//#include "UNIX_AssignedIdentityFixture.h"
//#include "UNIX_SynchronizedFixture.h"
//#include "UNIX_CorrespondingSettingsRecordFixture.h"
//#include "UNIX_LogManagesRecordFixture.h"
//#include "UNIX_ServiceProcessFixture.h"
//#include "UNIX_NextServiceAfterMeterFixture.h"
//#include "UNIX_QueueToScheduleFixture.h"
//#include "UNIX_ApplicationSystemDirectoryFixture.h"
//#include "UNIX_PolicySetAppliesToElementFixture.h"
//#include "UNIX_ParameterValueSourcesFixture.h"
//#include "UNIX_DirectorySpecificationFileFixture.h"
//#include "UNIX_AssociatedPrivilegeFixture.h"
//#include "UNIX_ParametersForMethodFixture.h"
//#include "UNIX_ExportFixture.h"
//#include "UNIX_ElementConformsToProfileFixture.h"
//#include "UNIX_AdjacentSlotsFixture.h"
//#include "UNIX_ProductPhysicalElementsFixture.h"
//#include "UNIX_IdentityContextFixture.h"
//#include "UNIX_ToDirectorySpecificationFixture.h"
//#include "UNIX_InstalledProductImageFixture.h"
//#include "UNIX_ProductProductDependencyFixture.h"
//#include "UNIX_DiagnosticResultFixture.h"
//#include "UNIX_SchedulingServiceToScheduleFixture.h"
//#include "UNIX_AbstractIndicationSubscriptionFixture.h"
//#include "UNIX_AuthorizedSubjectFixture.h"
//#include "UNIX_SettingsDefineStateFixture.h"
//#include "UNIX_SoftwareElementActionsFixture.h"
//#include "UNIX_SoftwareElementChecksFixture.h"
//#include "UNIX_AssociatedBlockStatisticsManifestCollectionFixture.h"
//#include "UNIX_ParticipatesInSetFixture.h"
//#include "UNIX_ConfigurationComponentFixture.h"
//#include "UNIX_CurrentTimeFixture.h"

#include <iostream>

int main (int argc, char *argv[])
{
	printf("Starting Pegasus Providers Testing Framework...");

	//UNIX_OtherOrganizationInformationFixture otherOrganizationInformation; otherOrganizationInformation.Run();
	//UNIX_DirectorySpecificationFixture directorySpecification; directorySpecification.Run();
	//UNIX_MemoryCheckFixture memoryCheck; memoryCheck.Run();
	//UNIX_VersionCompatibilityCheckFixture versionCompatibilityCheck; versionCompatibilityCheck.Run();
	//UNIX_DiskSpaceCheckFixture diskSpaceCheck; diskSpaceCheck.Run();
	//UNIX_SoftwareElementVersionCheckFixture softwareElementVersionCheck; softwareElementVersionCheck.Run();
	//UNIX_FileSpecificationFixture fileSpecification; fileSpecification.Run();
	//UNIX_ArchitectureCheckFixture architectureCheck; architectureCheck.Run();
	//UNIX_OSVersionCheckFixture oSVersionCheck; oSVersionCheck.Run();
	//UNIX_SettingCheckFixture settingCheck; settingCheck.Run();
	//UNIX_SwapSpaceCheckFixture swapSpaceCheck; swapSpaceCheck.Run();
	//UNIX_RegisteredSubProfileFixture registeredSubProfile; registeredSubProfile.Run();
	//UNIX_RejectConnectionActionFixture rejectConnectionAction; rejectConnectionAction.Run();
	//UNIX_VendorPolicyActionFixture vendorPolicyAction; vendorPolicyAction.Run();
	//UNIX_NetworkPacketActionFixture networkPacketAction; networkPacketAction.Run();
	//UNIX_MethodActionFixture methodAction; methodAction.Run();
	//UNIX_CompoundPolicyActionFixture compoundPolicyAction; compoundPolicyAction.Run();
	//UNIX_IKEActionFixture iKEAction; iKEAction.Run();
	//UNIX_IPsecTunnelActionFixture iPsecTunnelAction; iPsecTunnelAction.Run();
	//UNIX_IPsecTransportActionFixture iPsecTransportAction; iPsecTransportAction.Run();
	//UNIX_PreconfiguredTunnelActionFixture preconfiguredTunnelAction; preconfiguredTunnelAction.Run();
	//UNIX_PreconfiguredTransportActionFixture preconfiguredTransportAction; preconfiguredTransportAction.Run();
	//UNIX_IPsecRuleFixture iPsecRule; iPsecRule.Run();
	//UNIX_IKERuleFixture iKERule; iKERule.Run();
	//UNIX_AuthenticationRuleFixture authenticationRule; authenticationRule.Run();
	//UNIX_PolicyGroupFixture policyGroup; policyGroup.Run();
	//UNIX_VendorPolicyConditionFixture vendorPolicyCondition; vendorPolicyCondition.Run();
	//UNIX_DocumentAuthenticationFixture documentAuthentication; documentAuthentication.Run();
	//UNIX_PublicPrivateKeyAuthenticationFixture publicPrivateKeyAuthentication; publicPrivateKeyAuthentication.Run();
	//UNIX_KerberosAuthenticationFixture kerberosAuthentication; kerberosAuthentication.Run();
	//UNIX_NetworkingIDAuthenticationFixture networkingIDAuthentication; networkingIDAuthentication.Run();
	//UNIX_SharedSecretAuthenticationFixture sharedSecretAuthentication; sharedSecretAuthentication.Run();
	//UNIX_PhysicalCredentialAuthenticationFixture physicalCredentialAuthentication; physicalCredentialAuthentication.Run();
	//UNIX_AccountAuthenticationFixture accountAuthentication; accountAuthentication.Run();
	//UNIX_BiometricAuthenticationFixture biometricAuthentication; biometricAuthentication.Run();
	//UNIX_PolicyTimePeriodConditionFixture policyTimePeriodCondition; policyTimePeriodCondition.Run();
	//UNIX_QueryConditionFixture queryCondition; queryCondition.Run();
	//UNIX_PacketFilterConditionFixture packetFilterCondition; packetFilterCondition.Run();
	//UNIX_CompoundPolicyConditionFixture compoundPolicyCondition; compoundPolicyCondition.Run();
	//UNIX_StorageErrorFixture storageError; storageError.Run();
	//UNIX_MemoryErrorFixture memoryError; memoryError.Run();
	//UNIX_ConfigurationFixture configuration; configuration.Run();
	//UNIX_RebootActionFixture rebootAction; rebootAction.Run();
	//UNIX_ExecuteProgramFixture executeProgram; executeProgram.Run();
	//UNIX_CopyFileActionFixture copyFileAction; copyFileAction.Run();
	//UNIX_RemoveFileActionFixture removeFileAction; removeFileAction.Run();
	//UNIX_ModifySettingActionFixture modifySettingAction; modifySettingAction.Run();
	//UNIX_RemoveDirectoryActionFixture removeDirectoryAction; removeDirectoryAction.Run();
	//UNIX_CreateDirectoryActionFixture createDirectoryAction; createDirectoryAction.Run();
	//UNIX_FRUFixture fRU; fRU.Run();
	//UNIX_BaseMetricValueFixture baseMetricValue; baseMetricValue.Run();
	//UNIX_AggregationMetricValueFixture aggregationMetricValue; aggregationMetricValue.Run();
	//UNIX_ViewFixture view; view.Run();
	//UNIX_PhysicalComputerSystemViewFixture physicalComputerSystemView; physicalComputerSystemView.Run();
	//UNIX_SupportAccessFixture supportAccess; supportAccess.Run();
	//UNIX_ProductFixture product; product.Run();
	//UNIX_SystemConfigurationFixture systemConfiguration; systemConfiguration.Run();
	//UNIX_SystemSettingFixture systemSetting; systemSetting.Run();
	//UNIX_VideoControllerResolutionFixture videoControllerResolution; videoControllerResolution.Run();
	//UNIX_DiagnosticSettingFixture diagnosticSetting; diagnosticSetting.Run();
	//UNIX_TimeZoneFixture timeZone; timeZone.Run();
	//UNIX_MonitorResolutionFixture monitorResolution; monitorResolution.Run();
	//UNIX_OtherGroupInformationFixture otherGroupInformation; otherGroupInformation.Run();
	//UNIX_PhysicalLinkFixture physicalLink; physicalLink.Run();
	//UNIX_PhysicalMediaFixture physicalMedia; physicalMedia.Run();
	//UNIX_PhysicalTapeFixture physicalTape; physicalTape.Run();
	//UNIX_ChipFixture chip; chip.Run();
	//UNIX_PhysicalMemoryFixture physicalMemory; physicalMemory.Run();
	//UNIX_PhysicalConnectorFixture physicalConnector; physicalConnector.Run();
	//UNIX_SlotFixture slot; slot.Run();
	//UNIX_CardFixture card; card.Run();
	//UNIX_SystemBusCardFixture systemBusCard; systemBusCard.Run();
	//UNIX_RackFixture rack; rack.Run();
	//UNIX_ChassisFixture chassis; chassis.Run();
	//UNIX_PackageLocationFixture packageLocation; packageLocation.Run();
	//UNIX_StorageMediaLocationFixture storageMediaLocation; storageMediaLocation.Run();
	//UNIX_MagazineFixture magazine; magazine.Run();
	//UNIX_AuthenticationRequirementFixture authenticationRequirement; authenticationRequirement.Run();
	//UNIX_BGPRouteMapFixture bGPRouteMap; bGPRouteMap.Run();
	//UNIX_AccessControlInformationFixture accessControlInformation; accessControlInformation.Run();
	//UNIX_StoragePoolFixture storagePool; storagePool.Run();
	//UNIX_ConcreteJobFixture concreteJob; concreteJob.Run();
	//UNIX_PrintJobFixture printJob; printJob.Run();
	//UNIX_DataFileFixture dataFile; dataFile.Run();
	//UNIX_FIFOPipeFileFixture fIFOPipeFile; fIFOPipeFile.Run();
	//UNIX_DeviceFileFixture deviceFile; deviceFile.Run();
	//UNIX_UnixDeviceFileFixture unixDeviceFile; unixDeviceFile.Run();
	//UNIX_DirectoryFixture directory; directory.Run();
	//UNIX_UnixDirectoryFixture unixDirectory; unixDirectory.Run();
	//UNIX_SymbolicLinkFixture symbolicLink; symbolicLink.Run();
	//UNIX_BGPPathAttributesFixture bGPPathAttributes; bGPPathAttributes.Run();
	//UNIX_UnixFileFixture unixFile; unixFile.Run();
	//UNIX_RemoteFileSystemFixture remoteFileSystem; remoteFileSystem.Run();
	//UNIX_NFSFixture nFS; nFS.Run();
	//UNIX_DatabaseStorageAreaFixture databaseStorageArea; databaseStorageArea.Run();
	//UNIX_LocalFileSystemFixture localFileSystem; localFileSystem.Run();
	//UNIX_UnixLocalFileSystemFixture unixLocalFileSystem; unixLocalFileSystem.Run();
	//UNIX_ApplicationSystemFixture applicationSystem; applicationSystem.Run();
	//UNIX_DatabaseSystemFixture databaseSystem; databaseSystem.Run();
	//UNIX_VirtualComputerSystemFixture virtualComputerSystem; virtualComputerSystem.Run();
	//UNIX_UnitaryComputerSystemFixture unitaryComputerSystem; unitaryComputerSystem.Run();
	//UNIX_ClusterFixture cluster; cluster.Run();
	//UNIX_StorageLibraryFixture storageLibrary; storageLibrary.Run();
	//UNIX_ReusablePolicyContainerFixture reusablePolicyContainer; reusablePolicyContainer.Run();
	//UNIX_RoutingProtocolDomainFixture routingProtocolDomain; routingProtocolDomain.Run();
	//UNIX_OSPFAreaFixture oSPFArea; oSPFArea.Run();
	//UNIX_NetworkFixture network; network.Run();
	//UNIX_PolicyRepositoryFixture policyRepository; policyRepository.Run();
	//UNIX_AutonomousSystemFixture autonomousSystem; autonomousSystem.Run();
	//UNIX_DMAFixture dMA; dMA.Run();
	//UNIX_MemoryResourceFixture memoryResource; memoryResource.Run();
	//UNIX_PortResourceFixture portResource; portResource.Run();
	//UNIX_IRQFixture iRQ; iRQ.Run();
	//UNIX_UnixProcessFixture unixProcess; unixProcess.Run();
	//UNIX_MessageLogFixture messageLog; messageLog.Run();
	//UNIX_DiagnosticLogFixture diagnosticLog; diagnosticLog.Run();
	//UNIX_DiagnosticsLogFixture diagnosticsLog; diagnosticsLog.Run();
	//UNIX_OperatingSystemFixture operatingSystem; operatingSystem.Run();
	UNIX_AccountFixture account; account.Run();
	//UNIX_JobQueueFixture jobQueue; jobQueue.Run();
	//UNIX_PrintQueueFixture printQueue; printQueue.Run();
	//UNIX_UnixThreadFixture unixThread; unixThread.Run();
	//UNIX_CommonDatabaseFixture commonDatabase; commonDatabase.Run();
	//UNIX_LogicalModuleFixture logicalModule; logicalModule.Run();
	//UNIX_PassThroughModuleFixture passThroughModule; passThroughModule.Run();
	//UNIX_LabelReaderFixture labelReader; labelReader.Run();
	//UNIX_ScannerFixture scanner; scanner.Run();
	//UNIX_ProtocolControllerFixture protocolController; protocolController.Run();
	//UNIX_SCSIProtocolControllerFixture sCSIProtocolController; sCSIProtocolController.Run();
	//UNIX_WiFiRadioFixture wiFiRadio; wiFiRadio.Run();
	//UNIX_HeatPipeFixture heatPipe; heatPipe.Run();
	//UNIX_RefrigerationFixture refrigeration; refrigeration.Run();
	//UNIX_FanFixture fan; fan.Run();
	//UNIX_PowerSourceFixture powerSource; powerSource.Run();
	//UNIX_DesktopMonitorFixture desktopMonitor; desktopMonitor.Run();
	//UNIX_FlatPanelFixture flatPanel; flatPanel.Run();
	//UNIX_KeyboardFixture keyboard; keyboard.Run();
	//UNIX_PointingDeviceFixture pointingDevice; pointingDevice.Run();
	//UNIX_CableModemFixture cableModem; cableModem.Run();
	//UNIX_SDSLModemFixture sDSLModem; sDSLModem.Run();
	//UNIX_HDSLModemFixture hDSLModem; hDSLModem.Run();
	//UNIX_VDSLModemFixture vDSLModem; vDSLModem.Run();
	//UNIX_ADSLModemFixture aDSLModem; aDSLModem.Run();
	//UNIX_POTSModemFixture pOTSModem; pOTSModem.Run();
	//UNIX_UnimodemFixture unimodem; unimodem.Run();
	//UNIX_ISDNModemFixture iSDNModem; iSDNModem.Run();
	//UNIX_FibrePortFixture fibrePort; fibrePort.Run();
	//UNIX_FCPortFixture fCPort; fCPort.Run();
	//UNIX_EthernetPortFixture ethernetPort; ethernetPort.Run();
	//UNIX_LLDPEthernetPortFixture lLDPEthernetPort; lLDPEthernetPort.Run();
	//UNIX_WiFiPortFixture wiFiPort; wiFiPort.Run();
	//UNIX_TokenRingPortFixture tokenRingPort; tokenRingPort.Run();
	//UNIX_PCIPortFixture pCIPort; pCIPort.Run();
	//UNIX_USBPortFixture uSBPort; uSBPort.Run();
	//UNIX_DisketteDriveFixture disketteDrive; disketteDrive.Run();
	//UNIX_MagnetoOpticalDriveFixture magnetoOpticalDrive; magnetoOpticalDrive.Run();
	//UNIX_DiskDriveFixture diskDrive; diskDrive.Run();
	//UNIX_CDROMDriveFixture cDROMDrive; cDROMDrive.Run();
	//UNIX_TapeDriveFixture tapeDrive; tapeDrive.Run();
	//UNIX_WORMDriveFixture wORMDrive; wORMDrive.Run();
	//UNIX_DVDDriveFixture dVDDrive; dVDDrive.Run();
	//UNIX_PowerSupplyFixture powerSupply; powerSupply.Run();
	//UNIX_UninterruptiblePowerSupplyFixture uninterruptiblePowerSupply; uninterruptiblePowerSupply.Run();
	//UNIX_DiscreteSensorFixture discreteSensor; discreteSensor.Run();
	//UNIX_MultiStateSensorFixture multiStateSensor; multiStateSensor.Run();
	//UNIX_TemperatureSensorFixture temperatureSensor; temperatureSensor.Run();
	//UNIX_VoltageSensorFixture voltageSensor; voltageSensor.Run();
	//UNIX_CurrentSensorFixture currentSensor; currentSensor.Run();
	//UNIX_TachometerFixture tachometer; tachometer.Run();
	//UNIX_BinarySensorFixture binarySensor; binarySensor.Run();
	//UNIX_USBDeviceFixture uSBDevice; uSBDevice.Run();
	//UNIX_USBHubFixture uSBHub; uSBHub.Run();
	//UNIX_LimitedAccessPortFixture limitedAccessPort; limitedAccessPort.Run();
	//UNIX_PickerElementFixture pickerElement; pickerElement.Run();
	//UNIX_InterLibraryPortFixture interLibraryPort; interLibraryPort.Run();
	//UNIX_ChangerDeviceFixture changerDevice; changerDevice.Run();
	//UNIX_DoorFixture door; door.Run();
	//UNIX_PCIBridgeFixture pCIBridge; pCIBridge.Run();
	//UNIX_PCIeSwitchFixture pCIeSwitch; pCIeSwitch.Run();
	//UNIX_PCVideoControllerFixture pCVideoController; pCVideoController.Run();
	//UNIX_AGPVideoControllerFixture aGPVideoController; aGPVideoController.Run();
	//UNIX_ManagementControllerFixture managementController; managementController.Run();
	//UNIX_DisplayControllerFixture displayController; displayController.Run();
	//UNIX_PCMCIAControllerFixture pCMCIAController; pCMCIAController.Run();
	//UNIX_PortControllerFixture portController; portController.Run();
	//UNIX_SerialControllerFixture serialController; serialController.Run();
	//UNIX_ESCONControllerFixture eSCONController; eSCONController.Run();
	//UNIX_SSAControllerFixture sSAController; sSAController.Run();
	//UNIX_ParallelControllerFixture parallelController; parallelController.Run();
	//UNIX_SCSIControllerFixture sCSIController; sCSIController.Run();
	//UNIX_InfraredControllerFixture infraredController; infraredController.Run();
	//UNIX_USBControllerFixture uSBController; uSBController.Run();
	//UNIX_IDEControllerFixture iDEController; iDEController.Run();
	//UNIX_BatteryFixture battery; battery.Run();
	//UNIX_PrinterFixture printer; printer.Run();
	//UNIX_AlarmDeviceFixture alarmDevice; alarmDevice.Run();
	//UNIX_StorageVolumeFixture storageVolume; storageVolume.Run();
	//UNIX_VolumeSetFixture volumeSet; volumeSet.Run();
	//UNIX_LogicalDiskFixture logicalDisk; logicalDisk.Run();
	//UNIX_PhysicalExtentFixture physicalExtent; physicalExtent.Run();
	//UNIX_VolatileStorageFixture volatileStorage; volatileStorage.Run();
	//UNIX_NonVolatileStorageFixture nonVolatileStorage; nonVolatileStorage.Run();
	//UNIX_CacheMemoryFixture cacheMemory; cacheMemory.Run();
	//UNIX_DatabaseSegmentFixture databaseSegment; databaseSegment.Run();
	//UNIX_OpaqueManagementDataFixture opaqueManagementData; opaqueManagementData.Run();
	//UNIX_AggregatePSExtentFixture aggregatePSExtent; aggregatePSExtent.Run();
	//UNIX_SnapshotFixture snapshot; snapshot.Run();
	//UNIX_AggregatePExtentFixture aggregatePExtent; aggregatePExtent.Run();
	//UNIX_TapePartitionFixture tapePartition; tapePartition.Run();
	//UNIX_DiskPartitionFixture diskPartition; diskPartition.Run();
	//UNIX_CompositeExtentFixture compositeExtent; compositeExtent.Run();
	//UNIX_ProtectedSpaceExtentFixture protectedSpaceExtent; protectedSpaceExtent.Run();
	//UNIX_WatchdogFixture watchdog; watchdog.Run();
	//UNIX_IndicatorLEDFixture indicatorLED; indicatorLED.Run();
	//UNIX_ProcessorFixture processor; processor.Run();
	//UNIX_FibreChannelAdapterFixture fibreChannelAdapter; fibreChannelAdapter.Run();
	//UNIX_TokenRingAdapterFixture tokenRingAdapter; tokenRingAdapter.Run();
	//UNIX_EthernetAdapterFixture ethernetAdapter; ethernetAdapter.Run();
	//UNIX_VideoHeadFixture videoHead; videoHead.Run();
	//UNIX_KVMRedirectionSAPFixture kVMRedirectionSAP; kVMRedirectionSAP.Run();
	//UNIX_CredentialManagementSAPFixture credentialManagementSAP; credentialManagementSAP.Run();
	//UNIX_IPNetworkConnectionFixture iPNetworkConnection; iPNetworkConnection.Run();
	//UNIX_PrintSAPFixture printSAP; printSAP.Run();
	//UNIX_USBRedirectionSAPFixture uSBRedirectionSAP; uSBRedirectionSAP.Run();
	//UNIX_TextRedirectionSAPFixture textRedirectionSAP; textRedirectionSAP.Run();
	//UNIX_VLANFixture vLAN; vLAN.Run();
	//UNIX_BootSAPFixture bootSAP; bootSAP.Run();
	//UNIX_ClusteringSAPFixture clusteringSAP; clusteringSAP.Run();
	//UNIX_ServiceAccessURIFixture serviceAccessURI; serviceAccessURI.Run();
	//UNIX_LaunchInContextSAPFixture launchInContextSAP; launchInContextSAP.Run();
	//UNIX_RemotePortFixture remotePort; remotePort.Run();
	//UNIX_MediaRedirectionSAPFixture mediaRedirectionSAP; mediaRedirectionSAP.Run();
	//UNIX_ObjectManagerCommunicationMechanismFixture objectManagerCommunicationMechanism; objectManagerCommunicationMechanism.Run();
	//UNIX_CIMXMLCommunicationMechanismFixture cIMXMLCommunicationMechanism; cIMXMLCommunicationMechanism.Run();
	//UNIX_VLANEndpointFixture vLANEndpoint; vLANEndpoint.Run();
	//UNIX_SwitchPortFixture switchPort; switchPort.Run();
	//UNIX_IPXProtocolEndpointFixture iPXProtocolEndpoint; iPXProtocolEndpoint.Run();
	//UNIX_CLPProtocolEndpointFixture cLPProtocolEndpoint; cLPProtocolEndpoint.Run();
	//UNIX_SSHProtocolEndpointFixture sSHProtocolEndpoint; sSHProtocolEndpoint.Run();
	//UNIX_BGPProtocolEndpointFixture bGPProtocolEndpoint; bGPProtocolEndpoint.Run();
	//UNIX_DNSProtocolEndpointFixture dNSProtocolEndpoint; dNSProtocolEndpoint.Run();
	//UNIX_IPProtocolEndpointFixture iPProtocolEndpoint; iPProtocolEndpoint.Run();
	//UNIX_DHCPProtocolEndpointFixture dHCPProtocolEndpoint; dHCPProtocolEndpoint.Run();
	//UNIX_LANEndpointFixture lANEndpoint; lANEndpoint.Run();
	//UNIX_WiFiEndpointFixture wiFiEndpoint; wiFiEndpoint.Run();
	//UNIX_IKESAEndpointFixture iKESAEndpoint; iKESAEndpoint.Run();
	//UNIX_IPsecSAEndpointFixture iPsecSAEndpoint; iPsecSAEndpoint.Run();
	//UNIX_SCSIProtocolEndpointFixture sCSIProtocolEndpoint; sCSIProtocolEndpoint.Run();
	//UNIX_iSCSIProtocolEndpointFixture iSCSIProtocolEndpoint; iSCSIProtocolEndpoint.Run();
	//UNIX_TCPProtocolEndpointFixture tCPProtocolEndpoint; tCPProtocolEndpoint.Run();
	//UNIX_OSPFVirtualInterfaceFixture oSPFVirtualInterface; oSPFVirtualInterface.Run();
	//UNIX_OSPFProtocolEndpointFixture oSPFProtocolEndpoint; oSPFProtocolEndpoint.Run();
	//UNIX_UDPProtocolEndpointFixture uDPProtocolEndpoint; uDPProtocolEndpoint.Run();
	//UNIX_iSCSIConnectionFixture iSCSIConnection; iSCSIConnection.Run();
	//UNIX_iSCSISessionFixture iSCSISession; iSCSISession.Run();
	//UNIX_ProcessorCoreFixture processorCore; processorCore.Run();
	//UNIX_HardwareThreadFixture hardwareThread; hardwareThread.Run();
	//UNIX_ResourcePoolConfigurationServiceFixture resourcePoolConfigurationService; resourcePoolConfigurationService.Run();
	//UNIX_PrintServiceFixture printService; printService.Run();
	//UNIX_ControllerConfigurationServiceFixture controllerConfigurationService; controllerConfigurationService.Run();
	//UNIX_ZoneServiceFixture zoneService; zoneService.Run();
	//UNIX_ProtocolServiceFixture protocolService; protocolService.Run();
	//UNIX_VirtualSystemManagementServiceFixture virtualSystemManagementService; virtualSystemManagementService.Run();
	//UNIX_LaunchInContextServiceFixture launchInContextService; launchInContextService.Run();
	//UNIX_DropThresholdCalculationServiceFixture dropThresholdCalculationService; dropThresholdCalculationService.Run();
	//UNIX_IBSubnetManagerFixture iBSubnetManager; iBSubnetManager.Run();
	//UNIX_REDDropperServiceFixture rEDDropperService; rEDDropperService.Run();
	//UNIX_WeightedREDDropperServiceFixture weightedREDDropperService; weightedREDDropperService.Run();
	//UNIX_HeadTailDropperFixture headTailDropper; headTailDropper.Run();
	//UNIX_QueuingServiceFixture queuingService; queuingService.Run();
	//UNIX_PacketSchedulingServiceFixture packetSchedulingService; packetSchedulingService.Run();
	//UNIX_NonWorkConservingSchedulingServiceFixture nonWorkConservingSchedulingService; nonWorkConservingSchedulingService.Run();
	//UNIX_ToSMarkerServiceFixture toSMarkerService; toSMarkerService.Run();
	//UNIX_Priority8021QMarkerServiceFixture priority8021QMarkerService; priority8021QMarkerService.Run();
	//UNIX_PreambleMarkerServiceFixture preambleMarkerService; preambleMarkerService.Run();
	//UNIX_DSCPMarkerServiceFixture dSCPMarkerService; dSCPMarkerService.Run();
	//UNIX_ClassifierServiceFixture classifierService; classifierService.Run();
	//UNIX_ClassifierElementFixture classifierElement; classifierElement.Run();
	//UNIX_TokenBucketMeterServiceFixture tokenBucketMeterService; tokenBucketMeterService.Run();
	//UNIX_EWMAMeterServiceFixture eWMAMeterService; eWMAMeterService.Run();
	//UNIX_AverageRateMeterServiceFixture averageRateMeterService; averageRateMeterService.Run();
	//UNIX_PowerManagementServiceFixture powerManagementService; powerManagementService.Run();
	//UNIX_BIOSServiceFixture bIOSService; bIOSService.Run();
	//UNIX_EFServiceFixture eFService; eFService.Run();
	//UNIX_AFServiceFixture aFService; aFService.Run();
	//UNIX_FlowServiceFixture flowService; flowService.Run();
	//UNIX_Hdr8021PServiceFixture hdr8021PService; hdr8021PService.Run();
	//UNIX_PrecedenceServiceFixture precedenceService; precedenceService.Run();
	//UNIX_HelpServiceFixture helpService; helpService.Run();
	//UNIX_SCSIPathConfigurationServiceFixture sCSIPathConfigurationService; sCSIPathConfigurationService.Run();
	//UNIX_SourceRoutingServiceFixture sourceRoutingService; sourceRoutingService.Run();
	//UNIX_SpanningTreeServiceFixture spanningTreeService; spanningTreeService.Run();
	//UNIX_TransparentBridgingServiceFixture transparentBridgingService; transparentBridgingService.Run();
	//UNIX_SwitchServiceFixture switchService; switchService.Run();
	//UNIX_BGPServiceFixture bGPService; bGPService.Run();
	//UNIX_OSPFServiceFixture oSPFService; oSPFService.Run();
	//UNIX_SharedDeviceManagementServiceFixture sharedDeviceManagementService; sharedDeviceManagementService.Run();
	//UNIX_VirtualSystemSnapshotServiceFixture virtualSystemSnapshotService; virtualSystemSnapshotService.Run();
	//UNIX_OOBAlertServiceFixture oOBAlertService; oOBAlertService.Run();
	//UNIX_USBRedirectionServiceFixture uSBRedirectionService; uSBRedirectionService.Run();
	//UNIX_TextRedirectionServiceFixture textRedirectionService; textRedirectionService.Run();
	//UNIX_ObjectManagerFixture objectManager; objectManager.Run();
	//UNIX_ProtocolAdapterFixture protocolAdapter; protocolAdapter.Run();
	//UNIX_ObjectManagerAdapterFixture objectManagerAdapter; objectManagerAdapter.Run();
	//UNIX_FibreProtocolServiceFixture fibreProtocolService; fibreProtocolService.Run();
	//UNIX_AccountManagementServiceFixture accountManagementService; accountManagementService.Run();
	//UNIX_VerificationServiceFixture verificationService; verificationService.Run();
	//UNIX_IdentityManagementServiceFixture identityManagementService; identityManagementService.Run();
	//UNIX_StorageHardwareIDManagementServiceFixture storageHardwareIDManagementService; storageHardwareIDManagementService.Run();
	//UNIX_CertificateAuthorityFixture certificateAuthority; certificateAuthority.Run();
	//UNIX_SharedSecretServiceFixture sharedSecretService; sharedSecretService.Run();
	//UNIX_PublicKeyManagementServiceFixture publicKeyManagementService; publicKeyManagementService.Run();
	//UNIX_KeyBasedCredentialManagementServiceFixture keyBasedCredentialManagementService; keyBasedCredentialManagementService.Run();
	//UNIX_CertificateManagementServiceFixture certificateManagementService; certificateManagementService.Run();
	//UNIX_NotaryFixture notary; notary.Run();
	//UNIX_KerberosKeyDistributionCenterFixture kerberosKeyDistributionCenter; kerberosKeyDistributionCenter.Run();
	//UNIX_AuthorizationServiceFixture authorizationService; authorizationService.Run();
	//UNIX_PrivilegeManagementServiceFixture privilegeManagementService; privilegeManagementService.Run();
	//UNIX_RoleBasedAuthorizationServiceFixture roleBasedAuthorizationService; roleBasedAuthorizationService.Run();
	//UNIX_PlatformWatchdogServiceFixture platformWatchdogService; platformWatchdogService.Run();
	//UNIX_ClusteringServiceFixture clusteringService; clusteringService.Run();
	//UNIX_MetricServiceFixture metricService; metricService.Run();
	//UNIX_StorageConfigurationServiceFixture storageConfigurationService; storageConfigurationService.Run();
	//UNIX_ConfigurationReportingServiceFixture configurationReportingService; configurationReportingService.Run();
	//UNIX_IPConfigurationServiceFixture iPConfigurationService; iPConfigurationService.Run();
	//UNIX_IndicationServiceFixture indicationService; indicationService.Run();
	//UNIX_SoftwareInstallationServiceFixture softwareInstallationService; softwareInstallationService.Run();
	//UNIX_DiagnosticServiceFixture diagnosticService; diagnosticService.Run();
	//UNIX_DiagnosticTestFixture diagnosticTest; diagnosticTest.Run();
	//UNIX_TimeServiceFixture timeService; timeService.Run();
	//UNIX_PowerUtilizationManagementServiceFixture powerUtilizationManagementService; powerUtilizationManagementService.Run();
	//UNIX_StatisticsServiceFixture statisticsService; statisticsService.Run();
	//UNIX_BlockStatisticsServiceFixture blockStatisticsService; blockStatisticsService.Run();
	//UNIX_VLANServiceFixture vLANService; vLANService.Run();
	//UNIX_Specific802dot1QVLANServiceFixture specific802dot1QVLANService; specific802dot1QVLANService.Run();
	//UNIX_WakeUpServiceFixture wakeUpService; wakeUpService.Run();
	//UNIX_OpaqueManagementDataServiceFixture opaqueManagementDataService; opaqueManagementDataService.Run();
	//UNIX_DatabaseServiceFixture databaseService; databaseService.Run();
	//UNIX_BootServiceFixture bootService; bootService.Run();
	//UNIX_NetworkPortConfigurationServiceFixture networkPortConfigurationService; networkPortConfigurationService.Run();
	//UNIX_WiFiPortConfigurationServiceFixture wiFiPortConfigurationService; wiFiPortConfigurationService.Run();
	//UNIX_PrintMarkerFixture printMarker; printMarker.Run();
	//UNIX_PrintSupplyFixture printSupply; printSupply.Run();
	//UNIX_PrintInterpreterFixture printInterpreter; printInterpreter.Run();
	//UNIX_PrintInputTrayFixture printInputTray; printInputTray.Run();
	//UNIX_RoutingPolicyFixture routingPolicy; routingPolicy.Run();
	//UNIX_X509CredentialFilterEntryFixture x509CredentialFilterEntry; x509CredentialFilterEntry.Run();
	//UNIX_FilterEntryFixture filterEntry; filterEntry.Run();
	//UNIX_PreambleFilterFixture preambleFilter; preambleFilter.Run();
	//UNIX_PeerIDPayloadFilterEntryFixture peerIDPayloadFilterEntry; peerIDPayloadFilterEntry.Run();
	//UNIX_Hdr8021FilterFixture hdr8021Filter; hdr8021Filter.Run();
	//UNIX_IPSOFilterEntryFixture iPSOFilterEntry; iPSOFilterEntry.Run();
	//UNIX_IPHeadersFilterFixture iPHeadersFilter; iPHeadersFilter.Run();
	//UNIX_StaticForwardingEntryFixture staticForwardingEntry; staticForwardingEntry.Run();
	//UNIX_SoftwareIdentityFixture softwareIdentity; softwareIdentity.Run();
	//UNIX_SoftwareElementFixture softwareElement; softwareElement.Run();
	//UNIX_VideoBIOSElementFixture videoBIOSElement; videoBIOSElement.Run();
	//UNIX_BIOSElementFixture bIOSElement; bIOSElement.Run();
	//UNIX_ResourcePoolFixture resourcePool; resourcePool.Run();
	//UNIX_BGPIPRouteFixture bGPIPRoute; bGPIPRoute.Run();
	//UNIX_AdministrativeDistanceFixture administrativeDistance; administrativeDistance.Run();
	//UNIX_DynamicForwardingEntryFixture dynamicForwardingEntry; dynamicForwardingEntry.Run();
	//UNIX_SpareGroupFixture spareGroup; spareGroup.Run();
	//UNIX_StorageRedundancyGroupFixture storageRedundancyGroup; storageRedundancyGroup.Run();
	//UNIX_ExtraCapacityGroupFixture extraCapacityGroup; extraCapacityGroup.Run();
	//UNIX_BGPAttributesFixture bGPAttributes; bGPAttributes.Run();
	//UNIX_FilterListFixture filterList; filterList.Run();
	//UNIX_BIOSFeatureFixture bIOSFeature; bIOSFeature.Run();
	//UNIX_AGPSoftwareFeatureFixture aGPSoftwareFeature; aGPSoftwareFeature.Run();
	//UNIX_VideoBIOSFeatureFixture videoBIOSFeature; videoBIOSFeature.Run();
	//UNIX_OSPFAreaConfigurationFixture oSPFAreaConfiguration; oSPFAreaConfiguration.Run();
	//UNIX_OtherRoleInformationFixture otherRoleInformation; otherRoleInformation.Run();
	//UNIX_OtherPersonInformationFixture otherPersonInformation; otherPersonInformation.Run();
	//UNIX_LocationFixture location; location.Run();
	//UNIX_TraceLevelTypeFixture traceLevelType; traceLevelType.Run();
	//UNIX_AggregationMetricDefinitionFixture aggregationMetricDefinition; aggregationMetricDefinition.Run();
	//UNIX_MetricDefinitionFixture metricDefinition; metricDefinition.Run();
	//UNIX_ListenerDestinationWSManagementFixture listenerDestinationWSManagement; listenerDestinationWSManagement.Run();
	//UNIX_IndicationHandlerCIMXMLFixture indicationHandlerCIMXML; indicationHandlerCIMXML.Run();
	//UNIX_ListenerDestinationCIMXMLFixture listenerDestinationCIMXML; listenerDestinationCIMXML.Run();
	//UNIX_SystemIdentificationFixture systemIdentification; systemIdentification.Run();
	//UNIX_BlockStatisticsManifestFixture blockStatisticsManifest; blockStatisticsManifest.Run();
	//UNIX_IKEProposalFixture iKEProposal; iKEProposal.Run();
	//UNIX_IPsecProposalFixture iPsecProposal; iPsecProposal.Run();
	//UNIX_DatabaseParameterFixture databaseParameter; databaseParameter.Run();
	//UNIX_DatabaseSegmentSettingDataFixture databaseSegmentSettingData; databaseSegmentSettingData.Run();
	//UNIX_IPCOMPTransformFixture iPCOMPTransform; iPCOMPTransform.Run();
	//UNIX_ESPTransformFixture eSPTransform; eSPTransform.Run();
	//UNIX_AHTransformFixture aHTransform; aHTransform.Run();
	//UNIX_FileSystemSettingDataFixture fileSystemSettingData; fileSystemSettingData.Run();
	//UNIX_ExtendedStaticIPAssignmentSettingDataFixture extendedStaticIPAssignmentSettingData; extendedStaticIPAssignmentSettingData.Run();
	//UNIX_DHCPSettingDataFixture dHCPSettingData; dHCPSettingData.Run();
	//UNIX_DNSGeneralSettingDataFixture dNSGeneralSettingData; dNSGeneralSettingData.Run();
	//UNIX_DNSSettingDataFixture dNSSettingData; dNSSettingData.Run();
	//UNIX_StaticIPAssignmentSettingDataFixture staticIPAssignmentSettingData; staticIPAssignmentSettingData.Run();
	//UNIX_iSCSISessionSettingsFixture iSCSISessionSettings; iSCSISessionSettings.Run();
	//UNIX_DiagnosticSettingDataFixture diagnosticSettingData; diagnosticSettingData.Run();
	//UNIX_StatisticalSettingFixture statisticalSetting; statisticalSetting.Run();
	//UNIX_StorageSettingFixture storageSetting; storageSetting.Run();
	//UNIX_StorageSettingWithHintsFixture storageSettingWithHints; storageSettingWithHints.Run();
	//UNIX_EthernetPortAllocationSettingDataFixture ethernetPortAllocationSettingData; ethernetPortAllocationSettingData.Run();
	//UNIX_ProcessorAllocationSettingDataFixture processorAllocationSettingData; processorAllocationSettingData.Run();
	//UNIX_PowerAllocationSettingDataFixture powerAllocationSettingData; powerAllocationSettingData.Run();
	//UNIX_StorageAllocationSettingDataFixture storageAllocationSettingData; storageAllocationSettingData.Run();
	//UNIX_BootConfigSettingFixture bootConfigSetting; bootConfigSetting.Run();
	//UNIX_SSHSettingDataFixture sSHSettingData; sSHSettingData.Run();
	//UNIX_IndicationServiceSettingDataFixture indicationServiceSettingData; indicationServiceSettingData.Run();
	//UNIX_VirtualSystemSettingDataFixture virtualSystemSettingData; virtualSystemSettingData.Run();
	//UNIX_VirtualEthernetSwitchSettingDataFixture virtualEthernetSwitchSettingData; virtualEthernetSwitchSettingData.Run();
	//UNIX_IEEE8021xSettingsFixture iEEE8021xSettings; iEEE8021xSettings.Run();
	//UNIX_VLANEndpointSettingDataFixture vLANEndpointSettingData; vLANEndpointSettingData.Run();
	//UNIX_LogicalPortSettingsFixture logicalPortSettings; logicalPortSettings.Run();
	//UNIX_StorageClientSettingDataFixture storageClientSettingData; storageClientSettingData.Run();
	//UNIX_VirtualSystemMigrationSettingDataFixture virtualSystemMigrationSettingData; virtualSystemMigrationSettingData.Run();
	//UNIX_VideoHeadResolutionFixture videoHeadResolution; videoHeadResolution.Run();
	//UNIX_BootSettingDataFixture bootSettingData; bootSettingData.Run();
	//UNIX_CLPSettingDataFixture cLPSettingData; cLPSettingData.Run();
	//UNIX_WiFiNetworkDetectionSettingsFixture wiFiNetworkDetectionSettings; wiFiNetworkDetectionSettings.Run();
	//UNIX_SCSIMultipathSettingsFixture sCSIMultipathSettings; sCSIMultipathSettings.Run();
	//UNIX_CommonDatabaseSettingDataFixture commonDatabaseSettingData; commonDatabaseSettingData.Run();
	//UNIX_WiFiEndpointSettingsFixture wiFiEndpointSettings; wiFiEndpointSettings.Run();
	//UNIX_iSCSIConnectionSettingsFixture iSCSIConnectionSettings; iSCSIConnectionSettings.Run();
	//UNIX_AccountSettingDataFixture accountSettingData; accountSettingData.Run();
	//UNIX_ConnectivityMembershipSettingDataFixture connectivityMembershipSettingData; connectivityMembershipSettingData.Run();
	//UNIX_ZoneMembershipSettingDataFixture zoneMembershipSettingData; zoneMembershipSettingData.Run();
	//UNIX_BootSourceSettingFixture bootSourceSetting; bootSourceSetting.Run();
	//UNIX_SAEndpointRefreshSettingsFixture sAEndpointRefreshSettings; sAEndpointRefreshSettings.Run();
	//UNIX_IPVersionSettingDataFixture iPVersionSettingData; iPVersionSettingData.Run();
	//UNIX_JobSettingDataFixture jobSettingData; jobSettingData.Run();
	//UNIX_FCSwitchSettingsFixture fCSwitchSettings; fCSwitchSettings.Run();
	//UNIX_IndicationFilterFixture indicationFilter; indicationFilter.Run();
	//UNIX_OtherOrgUnitInformationFixture otherOrgUnitInformation; otherOrgUnitInformation.Run();
	//UNIX_MethodParametersFixture methodParameters; methodParameters.Run();
	//UNIX_ConfigurationCapacityFixture configurationCapacity; configurationCapacity.Run();
	//UNIX_MemoryCapacityFixture memoryCapacity; memoryCapacity.Run();
	//UNIX_KerberosCredentialFixture kerberosCredential; kerberosCredential.Run();
	//UNIX_KerberosTicketFixture kerberosTicket; kerberosTicket.Run();
	//UNIX_NamedCredentialFixture namedCredential; namedCredential.Run();
	//UNIX_PublicKeyCertificateFixture publicKeyCertificate; publicKeyCertificate.Run();
	//UNIX_X509CRLFixture x509CRL; x509CRL.Run();
	//UNIX_X509CertificateFixture x509Certificate; x509Certificate.Run();
	//UNIX_NamedSharedIKESecretFixture namedSharedIKESecret; namedSharedIKESecret.Run();
	//UNIX_SharedSecretFixture sharedSecret; sharedSecret.Run();
	//UNIX_UnsignedPublicKeyFixture unsignedPublicKey; unsignedPublicKey.Run();
	//UNIX_SharedCredentialFixture sharedCredential; sharedCredential.Run();
	//UNIX_UnsignedCredentialFixture unsignedCredential; unsignedCredential.Run();
	//UNIX_MediaAccessStatDataFixture mediaAccessStatData; mediaAccessStatData.Run();
	//UNIX_PickerStatDataFixture pickerStatData; pickerStatData.Run();
	//UNIX_DatabaseServiceStatisticsFixture databaseServiceStatistics; databaseServiceStatistics.Run();
	//UNIX_FCPortStatisticsFixture fCPortStatistics; fCPortStatistics.Run();
	//UNIX_TokenRingPortStatisticsFixture tokenRingPortStatistics; tokenRingPortStatistics.Run();
	//UNIX_EthernetPortStatisticsFixture ethernetPortStatistics; ethernetPortStatistics.Run();
	//UNIX_LLDPEthernetPortStatisticsFixture lLDPEthernetPortStatistics; lLDPEthernetPortStatistics.Run();
	//UNIX_BlockStorageStatisticalDataFixture blockStorageStatisticalData; blockStorageStatisticalData.Run();
	//UNIX_SAEndpointConnectionStatisticsFixture sAEndpointConnectionStatistics; sAEndpointConnectionStatistics.Run();
	//UNIX_iSCSILoginStatisticsFixture iSCSILoginStatistics; iSCSILoginStatistics.Run();
	//UNIX_iSCSISessionFailuresFixture iSCSISessionFailures; iSCSISessionFailures.Run();
	//UNIX_FCPortRateStatisticsFixture fCPortRateStatistics; fCPortRateStatistics.Run();
	//UNIX_MediaPhysicalStatDataFixture mediaPhysicalStatData; mediaPhysicalStatData.Run();
	//UNIX_DatabaseResourceStatisticsFixture databaseResourceStatistics; databaseResourceStatistics.Run();
	//UNIX_StatisticalRuntimeOverviewFixture statisticalRuntimeOverview; statisticalRuntimeOverview.Run();
	//UNIX_DeviceErrorDataFixture deviceErrorData; deviceErrorData.Run();
	//UNIX_BGPEndpointStatisticsFixture bGPEndpointStatistics; bGPEndpointStatistics.Run();
	//UNIX_CommonDatabaseStatisticsFixture commonDatabaseStatistics; commonDatabaseStatistics.Run();
	//UNIX_CIMOMStatisticalDataFixture cIMOMStatisticalData; cIMOMStatisticalData.Run();
	//UNIX_LabelReaderStatDataFixture labelReaderStatData; labelReaderStatData.Run();
	//UNIX_StorageHardwareIDFixture storageHardwareID; storageHardwareID.Run();
	//UNIX_GatewayPathIDFixture gatewayPathID; gatewayPathID.Run();
	//UNIX_IPNetworkIdentityFixture iPNetworkIdentity; iPNetworkIdentity.Run();
	//UNIX_CredentialStoreFixture credentialStore; credentialStore.Run();
	//UNIX_KeystoreFixture keystore; keystore.Run();
	//UNIX_RangeOfIPAddressesFixture rangeOfIPAddresses; rangeOfIPAddresses.Run();
	//UNIX_StatisticsCollectionFixture statisticsCollection; statisticsCollection.Run();
	//UNIX_BlockStatisticsManifestCollectionFixture blockStatisticsManifestCollection; blockStatisticsManifestCollection.Run();
	//UNIX_LogicalPortGroupFixture logicalPortGroup; logicalPortGroup.Run();
	//UNIX_PCIPortGroupFixture pCIPortGroup; pCIPortGroup.Run();
	//UNIX_NamedAddressCollectionFixture namedAddressCollection; namedAddressCollection.Run();
	//UNIX_ZoneSetFixture zoneSet; zoneSet.Run();
	//UNIX_OSPFLinkFixture oSPFLink; oSPFLink.Run();
	//UNIX_IPXConnectivityNetworkFixture iPXConnectivityNetwork; iPXConnectivityNetwork.Run();
	//UNIX_LANConnectivitySegmentFixture lANConnectivitySegment; lANConnectivitySegment.Run();
	//UNIX_IPConnectivitySubnetFixture iPConnectivitySubnet; iPConnectivitySubnet.Run();
	//UNIX_ZoneFixture zone; zone.Run();
	//UNIX_NetworkVLANFixture networkVLAN; networkVLAN.Run();
	//UNIX_PolicyRoleCollectionFixture policyRoleCollection; policyRoleCollection.Run();
	//UNIX_RedundancySetFixture redundancySet; redundancySet.Run();
	//UNIX_StorageRedundancySetFixture storageRedundancySet; storageRedundancySet.Run();
	//UNIX_SCSITargetPortGroupFixture sCSITargetPortGroup; sCSITargetPortGroup.Run();
	//UNIX_ProfileFixture profile; profile.Run();
	//UNIX_GroupFixture group; group.Run();
	//UNIX_FilterCollectionFixture filterCollection; filterCollection.Run();
	//UNIX_ReplacementSetFixture replacementSet; replacementSet.Run();
	//UNIX_RoleFixture role; role.Run();
	//UNIX_InstalledProductFixture installedProduct; installedProduct.Run();
	//UNIX_ConcreteCollectionFixture concreteCollection; concreteCollection.Run();
	//UNIX_BGPClusterFixture bGPCluster; bGPCluster.Run();
	//UNIX_DiskGroupFixture diskGroup; diskGroup.Run();
	//UNIX_LANSegmentFixture lANSegment; lANSegment.Run();
	//UNIX_IPXNetworkFixture iPXNetwork; iPXNetwork.Run();
	//UNIX_IPSubnetFixture iPSubnet; iPSubnet.Run();
	//UNIX_BufferPoolFixture bufferPool; bufferPool.Run();
	//UNIX_BGPPeerGroupFixture bGPPeerGroup; bGPPeerGroup.Run();
	//UNIX_IPAddressRangeFixture iPAddressRange; iPAddressRange.Run();
	//UNIX_BIOSStringFixture bIOSString; bIOSString.Run();
	//UNIX_BIOSIntegerFixture bIOSInteger; bIOSInteger.Run();
	//UNIX_BIOSPasswordFixture bIOSPassword; bIOSPassword.Run();
	//UNIX_BIOSEnumerationFixture bIOSEnumeration; bIOSEnumeration.Run();
	//UNIX_MethodResultFixture methodResult; methodResult.Run();
	//UNIX_UsersAccessFixture usersAccess; usersAccess.Run();
	//UNIX_UserContactFixture userContact; userContact.Run();
	//UNIX_PersonFixture person; person.Run();
	//UNIX_OrganizationFixture organization; organization.Run();
	//UNIX_OrgUnitFixture orgUnit; orgUnit.Run();
	//UNIX_SecuritySensitivityFixture securitySensitivity; securitySensitivity.Run();
	//UNIX_PhysicalStatisticalInformationFixture physicalStatisticalInformation; physicalStatisticalInformation.Run();
	//UNIX_MediaPhysicalStatInfoFixture mediaPhysicalStatInfo; mediaPhysicalStatInfo.Run();
	//UNIX_LabelReaderStatInfoFixture labelReaderStatInfo; labelReaderStatInfo.Run();
	//UNIX_FCAdapterEventCountersFixture fCAdapterEventCounters; fCAdapterEventCounters.Run();
	//UNIX_FibrePortEventCountersFixture fibrePortEventCounters; fibrePortEventCounters.Run();
	//UNIX_PickerStatInfoFixture pickerStatInfo; pickerStatInfo.Run();
	//UNIX_MediaAccessStatInfoFixture mediaAccessStatInfo; mediaAccessStatInfo.Run();
	//UNIX_SystemStatisticalInformationFixture systemStatisticalInformation; systemStatisticalInformation.Run();
	//UNIX_DeviceErrorCountsFixture deviceErrorCounts; deviceErrorCounts.Run();
	//UNIX_SpanningTreeStatisticsFixture spanningTreeStatistics; spanningTreeStatistics.Run();
	//UNIX_TransparentBridgingStatisticsFixture transparentBridgingStatistics; transparentBridgingStatistics.Run();
	//UNIX_BGPStatisticsFixture bGPStatistics; bGPStatistics.Run();
	//UNIX_SwitchPortStatisticsFixture switchPortStatistics; switchPortStatistics.Run();
	//UNIX_SwitchPortTransparentBridgingStatisticsFixture switchPortTransparentBridgingStatistics; switchPortTransparentBridgingStatistics.Run();
	//UNIX_SwitchPortSourceRoutingStatisticsFixture switchPortSourceRoutingStatistics; switchPortSourceRoutingStatistics.Run();
	//UNIX_SwitchPortSpanningTreeStatisticsFixture switchPortSpanningTreeStatistics; switchPortSpanningTreeStatistics.Run();
	//UNIX_UnixProcessStatisticalInformationFixture unixProcessStatisticalInformation; unixProcessStatisticalInformation.Run();
	//UNIX_DiagnosticServiceRecordFixture diagnosticServiceRecord; diagnosticServiceRecord.Run();
	//UNIX_DiagnosticCompletionRecordFixture diagnosticCompletionRecord; diagnosticCompletionRecord.Run();
	//UNIX_DiagnosticSettingDataRecordFixture diagnosticSettingDataRecord; diagnosticSettingDataRecord.Run();
	//UNIX_DiagnosticSettingRecordFixture diagnosticSettingRecord; diagnosticSettingRecord.Run();
	//UNIX_LogRecordFixture logRecord; logRecord.Run();
	//UNIX_LogEntryFixture logEntry; logEntry.Run();
	//UNIX_PrioritySchedulingElementFixture prioritySchedulingElement; prioritySchedulingElement.Run();
	//UNIX_BoundedPrioritySchedulingElementFixture boundedPrioritySchedulingElement; boundedPrioritySchedulingElement.Run();
	//UNIX_AllocationSchedulingElementFixture allocationSchedulingElement; allocationSchedulingElement.Run();
	//UNIX_WRRSchedulingElementFixture wRRSchedulingElement; wRRSchedulingElement.Run();
	//UNIX_NamespaceFixture namespace; namespace.Run();
	//UNIX_NextHopRouteFixture nextHopRoute; nextHopRoute.Run();
	//UNIX_NextHopIPRouteFixture nextHopIPRoute; nextHopIPRoute.Run();
	//UNIX_USBRedirectionCapabilitiesFixture uSBRedirectionCapabilities; uSBRedirectionCapabilities.Run();
	//UNIX_MediaRedirectionCapabilitiesFixture mediaRedirectionCapabilities; mediaRedirectionCapabilities.Run();
	//UNIX_BootServiceCapabilitiesFixture bootServiceCapabilities; bootServiceCapabilities.Run();
	//UNIX_OpaqueManagementDataCapabilitiesFixture opaqueManagementDataCapabilities; opaqueManagementDataCapabilities.Run();
	//UNIX_PlatformWatchdogServiceCapabilitiesFixture platformWatchdogServiceCapabilities; platformWatchdogServiceCapabilities.Run();
	//UNIX_AlarmDeviceCapabilitiesFixture alarmDeviceCapabilities; alarmDeviceCapabilities.Run();
	//UNIX_FCSwitchCapabilitiesFixture fCSwitchCapabilities; fCSwitchCapabilities.Run();
	//UNIX_IndicatorLEDCapabilitiesFixture indicatorLEDCapabilities; indicatorLEDCapabilities.Run();
	//UNIX_RecordLogCapabilitiesFixture recordLogCapabilities; recordLogCapabilities.Run();
	//UNIX_MetricServiceCapabilitiesFixture metricServiceCapabilities; metricServiceCapabilities.Run();
	//UNIX_DHCPCapabilitiesFixture dHCPCapabilities; dHCPCapabilities.Run();
	//UNIX_OperatingSystemCapabilitiesFixture operatingSystemCapabilities; operatingSystemCapabilities.Run();
	//UNIX_WiFiEndpointCapabilitiesFixture wiFiEndpointCapabilities; wiFiEndpointCapabilities.Run();
	//UNIX_NetworkPortCapabilitiesFixture networkPortCapabilities; networkPortCapabilities.Run();
	//UNIX_WiFiPortCapabilitiesFixture wiFiPortCapabilities; wiFiPortCapabilities.Run();
	//UNIX_FCPortCapabilitiesFixture fCPortCapabilities; fCPortCapabilities.Run();
	//UNIX_VirtualSystemManagementCapabilitiesFixture virtualSystemManagementCapabilities; virtualSystemManagementCapabilities.Run();
	//UNIX_ProcessorCapabilitiesFixture processorCapabilities; processorCapabilities.Run();
	//UNIX_LaunchInContextCapabilitiesFixture launchInContextCapabilities; launchInContextCapabilities.Run();
	//UNIX_AccountManagementCapabilitiesFixture accountManagementCapabilities; accountManagementCapabilities.Run();
	//UNIX_CLPCapabilitiesFixture cLPCapabilities; cLPCapabilities.Run();
	//UNIX_SSHCapabilitiesFixture sSHCapabilities; sSHCapabilities.Run();
	//UNIX_PowerUtilizationManagementCapabilitiesFixture powerUtilizationManagementCapabilities; powerUtilizationManagementCapabilities.Run();
	//UNIX_CredentialManagementCapabilitiesFixture credentialManagementCapabilities; credentialManagementCapabilities.Run();
	//UNIX_CertificateManagementCapabilitiesFixture certificateManagementCapabilities; certificateManagementCapabilities.Run();
	//UNIX_VLANEndpointCapabilitiesFixture vLANEndpointCapabilities; vLANEndpointCapabilities.Run();
	//UNIX_QueryCapabilitiesFixture queryCapabilities; queryCapabilities.Run();
	//UNIX_StorageReplicationCapabilitiesFixture storageReplicationCapabilities; storageReplicationCapabilities.Run();
	//UNIX_IEEE8021xCapabilitiesFixture iEEE8021xCapabilities; iEEE8021xCapabilities.Run();
	//UNIX_CommonDatabaseCapabilitiesFixture commonDatabaseCapabilities; commonDatabaseCapabilities.Run();
	//UNIX_BIOSServiceCapabilitiesFixture bIOSServiceCapabilities; bIOSServiceCapabilities.Run();
	//UNIX_StorageCapabilitiesFixture storageCapabilities; storageCapabilities.Run();
	//UNIX_OSPFServiceCapabilitiesFixture oSPFServiceCapabilities; oSPFServiceCapabilities.Run();
	//UNIX_ComputerSystemNodeCapabilitiesFixture computerSystemNodeCapabilities; computerSystemNodeCapabilities.Run();
	//UNIX_StatisticsCapabilitiesFixture statisticsCapabilities; statisticsCapabilities.Run();
	//UNIX_BlockStatisticsCapabilitiesFixture blockStatisticsCapabilities; blockStatisticsCapabilities.Run();
	//UNIX_PhysicalAssetCapabilitiesFixture physicalAssetCapabilities; physicalAssetCapabilities.Run();
	//UNIX_DeviceSharingCapabilitiesFixture deviceSharingCapabilities; deviceSharingCapabilities.Run();
	//UNIX_IndicationServiceCapabilitiesFixture indicationServiceCapabilities; indicationServiceCapabilities.Run();
	//UNIX_AllocationCapabilitiesFixture allocationCapabilities; allocationCapabilities.Run();
	//UNIX_LocalizationCapabilitiesFixture localizationCapabilities; localizationCapabilities.Run();
	//UNIX_SoftwareInstallationServiceCapabilitiesFixture softwareInstallationServiceCapabilities; softwareInstallationServiceCapabilities.Run();
	//UNIX_VirtualSystemSnapshotServiceCapabilitiesFixture virtualSystemSnapshotServiceCapabilities; virtualSystemSnapshotServiceCapabilities.Run();
	//UNIX_SCSIMultipathConfigurationCapabilitiesFixture sCSIMultipathConfigurationCapabilities; sCSIMultipathConfigurationCapabilities.Run();
	//UNIX_ZoneCapabilitiesFixture zoneCapabilities; zoneCapabilities.Run();
	//UNIX_iSCSICapabilitiesFixture iSCSICapabilities; iSCSICapabilities.Run();
	//UNIX_PowerManagementCapabilitiesFixture powerManagementCapabilities; powerManagementCapabilities.Run();
	//UNIX_DiagnosticServiceCapabilitiesFixture diagnosticServiceCapabilities; diagnosticServiceCapabilities.Run();
	//UNIX_FileSystemCapabilitiesFixture fileSystemCapabilities; fileSystemCapabilities.Run();
	//UNIX_VirtualSystemSnapshotCapabilitiesFixture virtualSystemSnapshotCapabilities; virtualSystemSnapshotCapabilities.Run();
	//UNIX_ResourcePoolConfigurationCapabilitiesFixture resourcePoolConfigurationCapabilities; resourcePoolConfigurationCapabilities.Run();
	//UNIX_PrivilegeManagementCapabilitiesFixture privilegeManagementCapabilities; privilegeManagementCapabilities.Run();
	//UNIX_RoleBasedManagementCapabilitiesFixture roleBasedManagementCapabilities; roleBasedManagementCapabilities.Run();
	//UNIX_StorageConfigurationCapabilitiesFixture storageConfigurationCapabilities; storageConfigurationCapabilities.Run();
	//UNIX_ProtocolControllerMaskingCapabilitiesFixture protocolControllerMaskingCapabilities; protocolControllerMaskingCapabilities.Run();
	//UNIX_PrivilegeFixture privilege; privilege.Run();
	//UNIX_AuthorizedPrivilegeFixture authorizedPrivilege; authorizedPrivilege.Run();
	//UNIX_InstReadFixture instRead; instRead.Run();
	//UNIX_InstModificationFixture instModification; instModification.Run();
	//UNIX_InstDeletionFixture instDeletion; instDeletion.Run();
	//UNIX_InstMethodCallFixture instMethodCall; instMethodCall.Run();
	//UNIX_InstCreationFixture instCreation; instCreation.Run();
	//UNIX_ClassCreationFixture classCreation; classCreation.Run();
	//UNIX_ClassDeletionFixture classDeletion; classDeletion.Run();
	//UNIX_ClassModificationFixture classModification; classModification.Run();
	//UNIX_AlertInstIndicationFixture alertInstIndication; alertInstIndication.Run();
	//UNIX_ThresholdIndicationFixture thresholdIndication; thresholdIndication.Run();
	//UNIX_ContainedProposalFixture containedProposal; containedProposal.Run();
	//UNIX_ContainedTransformFixture containedTransform; containedTransform.Run();
	//UNIX_SettingsDefineCapabilitiesFixture settingsDefineCapabilities; settingsDefineCapabilities.Run();
	//UNIX_ProductSoftwareComponentFixture productSoftwareComponent; productSoftwareComponent.Run();
	//UNIX_QoSConditioningSubServiceFixture qoSConditioningSubService; qoSConditioningSubService.Run();
	//UNIX_SwitchServiceSpanningTreeFixture switchServiceSpanningTree; switchServiceSpanningTree.Run();
	//UNIX_QoSSubServiceFixture qoSSubService; qoSSubService.Run();
	//UNIX_ClassifierElementInClassifierServiceFixture classifierElementInClassifierService; classifierElementInClassifierService.Run();
	//UNIX_SwitchServiceVLANFixture switchServiceVLAN; switchServiceVLAN.Run();
	//UNIX_SwitchServiceSourceRoutingFixture switchServiceSourceRouting; switchServiceSourceRouting.Run();
	//UNIX_SwitchServiceTransparentBridgingFixture switchServiceTransparentBridging; switchServiceTransparentBridging.Run();
	//UNIX_AccountOnSystemFixture accountOnSystem; accountOnSystem.Run();
	//UNIX_HostedResourcePoolFixture hostedResourcePool; hostedResourcePool.Run();
	//UNIX_ContainedDomainFixture containedDomain; containedDomain.Run();
	//UNIX_RoutingProtocolDomainInASFixture routingProtocolDomainInAS; routingProtocolDomainInAS.Run();
	//UNIX_InstalledOSFixture installedOS; installedOS.Run();
	//UNIX_HostedFileSystemFixture hostedFileSystem; hostedFileSystem.Run();
	//UNIX_ASBGPEndpointsFixture aSBGPEndpoints; aSBGPEndpoints.Run();
	//UNIX_RoutersInASFixture routersInAS; routersInAS.Run();
	//UNIX_ComponentCSFixture componentCS; componentCS.Run();
	//UNIX_SystemPartitionFixture systemPartition; systemPartition.Run();
	//UNIX_HostedStoragePoolFixture hostedStoragePool; hostedStoragePool.Run();
	//UNIX_FilterListInSystemFixture filterListInSystem; filterListInSystem.Run();
	//UNIX_ComputerSystemMemoryFixture computerSystemMemory; computerSystemMemory.Run();
	//UNIX_ComputerSystemProcessorFixture computerSystemProcessor; computerSystemProcessor.Run();
	//UNIX_PolicyRepositoryInPolicyRepositoryFixture policyRepositoryInPolicyRepository; policyRepositoryInPolicyRepository.Run();
	//UNIX_SystemBIOSFixture systemBIOS; systemBIOS.Run();
	//UNIX_ApplicationSystemSoftwareFeatureFixture applicationSystemSoftwareFeature; applicationSystemSoftwareFeature.Run();
	//UNIX_ComputerSystemIRQFixture computerSystemIRQ; computerSystemIRQ.Run();
	//UNIX_ComputerSystemMappedIOFixture computerSystemMappedIO; computerSystemMappedIO.Run();
	//UNIX_ComputerSystemDMAFixture computerSystemDMA; computerSystemDMA.Run();
	//UNIX_FilterEntryInSystemFixture filterEntryInSystem; filterEntryInSystem.Run();
	//UNIX_ConfederationFixture confederation; confederation.Run();
	//UNIX_PolicyContainerInPolicyContainerFixture policyContainerInPolicyContainer; policyContainerInPolicyContainer.Run();
	//UNIX_EndpointInAreaFixture endpointInArea; endpointInArea.Run();
	//UNIX_OSProcessFixture oSProcess; oSProcess.Run();
	//UNIX_ListsInRoutingPolicyFixture listsInRoutingPolicy; listsInRoutingPolicy.Run();
	//UNIX_ConcreteComponentFixture concreteComponent; concreteComponent.Run();
	//UNIX_ModulePortFixture modulePort; modulePort.Run();
	//UNIX_DirectoryContainsFileFixture directoryContainsFile; directoryContainsFile.Run();
	//UNIX_OrderedComponentFixture orderedComponent; orderedComponent.Run();
	//UNIX_EntriesInFilterListFixture entriesInFilterList; entriesInFilterList.Run();
	//UNIX_OperatingSystemSoftwareFeatureFixture operatingSystemSoftwareFeature; operatingSystemSoftwareFeature.Run();
	//UNIX_BGPServiceAttributesFixture bGPServiceAttributes; bGPServiceAttributes.Run();
	//UNIX_NetworkAdapterRedundancyComponentFixture networkAdapterRedundancyComponent; networkAdapterRedundancyComponent.Run();
	//UNIX_PExtentRedundancyComponentFixture pExtentRedundancyComponent; pExtentRedundancyComponent.Run();
	//UNIX_AggregateRedundancyComponentFixture aggregateRedundancyComponent; aggregateRedundancyComponent.Run();
	//UNIX_ProcessOfJobFixture processOfJob; processOfJob.Run();
	//UNIX_ContainedLocationFixture containedLocation; containedLocation.Run();
	//UNIX_PolicyGroupInPolicyGroupFixture policyGroupInPolicyGroup; policyGroupInPolicyGroup.Run();
	//UNIX_PolicyConditionInPolicyRuleFixture policyConditionInPolicyRule; policyConditionInPolicyRule.Run();
	//UNIX_PacketConditionInSARuleFixture packetConditionInSARule; packetConditionInSARule.Run();
	//UNIX_PolicyConditionInPolicyConditionFixture policyConditionInPolicyCondition; policyConditionInPolicyCondition.Run();
	//UNIX_PolicyActionInPolicyRuleFixture policyActionInPolicyRule; policyActionInPolicyRule.Run();
	//UNIX_PolicyActionInPolicyActionFixture policyActionInPolicyAction; policyActionInPolicyAction.Run();
	//UNIX_PolicySetComponentFixture policySetComponent; policySetComponent.Run();
	//UNIX_PolicyRuleValidityPeriodFixture policyRuleValidityPeriod; policyRuleValidityPeriod.Run();
	//UNIX_PolicyRuleInPolicyGroupFixture policyRuleInPolicyGroup; policyRuleInPolicyGroup.Run();
	//UNIX_PolicySetValidityPeriodFixture policySetValidityPeriod; policySetValidityPeriod.Run();
	//UNIX_AssociatedRemainingExtentFixture associatedRemainingExtent; associatedRemainingExtent.Run();
	//UNIX_FilteredBGPAttributesFixture filteredBGPAttributes; filteredBGPAttributes.Run();
	//UNIX_SoftwareElementComponentFixture softwareElementComponent; softwareElementComponent.Run();
	//UNIX_PrintJobFileFixture printJobFile; printJobFile.Run();
	//UNIX_BIOSFeatureBIOSElementsFixture bIOSFeatureBIOSElements; bIOSFeatureBIOSElements.Run();
	//UNIX_VideoBIOSFeatureVideoBIOSElementsFixture videoBIOSFeatureVideoBIOSElements; videoBIOSFeatureVideoBIOSElements.Run();
	//UNIX_ProductPhysicalComponentFixture productPhysicalComponent; productPhysicalComponent.Run();
	//UNIX_AssociatedComponentExtentFixture associatedComponentExtent; associatedComponentExtent.Run();
	//UNIX_VirtualSystemSettingDataComponentFixture virtualSystemSettingDataComponent; virtualSystemSettingDataComponent.Run();
	//UNIX_DatabaseFileFixture databaseFile; databaseFile.Run();
	//UNIX_ProductComponentFixture productComponent; productComponent.Run();
	//UNIX_CollectionOfSensorsFixture collectionOfSensors; collectionOfSensors.Run();
	//UNIX_DiagnosticTestInPackageFixture diagnosticTestInPackage; diagnosticTestInPackage.Run();
	//UNIX_ApplicationSystemHierarchyFixture applicationSystemHierarchy; applicationSystemHierarchy.Run();
	//UNIX_FileStorageFixture fileStorage; fileStorage.Run();
	//UNIX_LinkHasConnectorFixture linkHasConnector; linkHasConnector.Run();
	//UNIX_ConnectorOnPackageFixture connectorOnPackage; connectorOnPackage.Run();
	//UNIX_PackagedComponentFixture packagedComponent; packagedComponent.Run();
	//UNIX_MemoryOnCardFixture memoryOnCard; memoryOnCard.Run();
	//UNIX_CardOnCardFixture cardOnCard; cardOnCard.Run();
	//UNIX_ChassisInRackFixture chassisInRack; chassisInRack.Run();
	//UNIX_PackageInChassisFixture packageInChassis; packageInChassis.Run();
	//UNIX_NetworkPipeCompositionFixture networkPipeComposition; networkPipeComposition.Run();
	//UNIX_ProductServiceComponentFixture productServiceComponent; productServiceComponent.Run();
	//UNIX_SoftwareFeatureComponentFixture softwareFeatureComponent; softwareFeatureComponent.Run();
	//UNIX_ProductElementComponentFixture productElementComponent; productElementComponent.Run();
	//UNIX_DatabaseStorageFixture databaseStorage; databaseStorage.Run();
	//UNIX_ProcessThreadFixture processThread; processThread.Run();
	//UNIX_BGPRouteMapsInRoutingPolicyFixture bGPRouteMapsInRoutingPolicy; bGPRouteMapsInRoutingPolicy.Run();
	//UNIX_ElementInSchedulingServiceFixture elementInSchedulingService; elementInSchedulingService.Run();
	//UNIX_ConcreteIdentityFixture concreteIdentity; concreteIdentity.Run();
	//UNIX_FileIdentityFixture fileIdentity; fileIdentity.Run();
	//UNIX_NetworkVirtualAdapterFixture networkVirtualAdapter; networkVirtualAdapter.Run();
	//UNIX_DeviceIdentityFixture deviceIdentity; deviceIdentity.Run();
	//UNIX_AccountIdentityFixture accountIdentity; accountIdentity.Run();
	//UNIX_EndpointIdentityFixture endpointIdentity; endpointIdentity.Run();
	//UNIX_ElementSettingDataFixture elementSettingData; elementSettingData.Run();
	//UNIX_TransformOfSecurityAssociationFixture transformOfSecurityAssociation; transformOfSecurityAssociation.Run();
	//UNIX_ErrorCountersForDeviceFixture errorCountersForDevice; errorCountersForDevice.Run();
	//UNIX_SystemStatisticsFixture systemStatistics; systemStatistics.Run();
	//UNIX_ServiceStatisticsFixture serviceStatistics; serviceStatistics.Run();
	//UNIX_BGPServiceStatisticsFixture bGPServiceStatistics; bGPServiceStatistics.Run();
	//UNIX_DeviceStatisticsFixture deviceStatistics; deviceStatistics.Run();
	//UNIX_UnixProcessStatisticsFixture unixProcessStatistics; unixProcessStatistics.Run();
	//UNIX_SAPStatisticsFixture sAPStatistics; sAPStatistics.Run();
	//UNIX_PhysicalStatisticsFixture physicalStatistics; physicalStatistics.Run();
	//UNIX_EndpointInLinkFixture endpointInLink; endpointInLink.Run();
	//UNIX_MemberPrincipalFixture memberPrincipal; memberPrincipal.Run();
	//UNIX_ElementInPolicyRoleCollectionFixture elementInPolicyRoleCollection; elementInPolicyRoleCollection.Run();
	//UNIX_BGPPeerUsesRouteMapFixture bGPPeerUsesRouteMap; bGPPeerUsesRouteMap.Run();
	//UNIX_RoutersInBGPClusterFixture routersInBGPCluster; routersInBGPCluster.Run();
	//UNIX_DriveInDiskGroupFixture driveInDiskGroup; driveInDiskGroup.Run();
	//UNIX_InLogicalNetworkFixture inLogicalNetwork; inLogicalNetwork.Run();
	//UNIX_InSegmentFixture inSegment; inSegment.Run();
	//UNIX_InBGPPeerGroupFixture inBGPPeerGroup; inBGPPeerGroup.Run();
	//UNIX_ExtentInDiskGroupFixture extentInDiskGroup; extentInDiskGroup.Run();
	//UNIX_OrderedMemberOfCollectionFixture orderedMemberOfCollection; orderedMemberOfCollection.Run();
	//UNIX_CollectedSoftwareFeaturesFixture collectedSoftwareFeatures; collectedSoftwareFeatures.Run();
	//UNIX_CollectedSoftwareElementsFixture collectedSoftwareElements; collectedSoftwareElements.Run();
	//UNIX_PolicySetInRoleCollectionFixture policySetInRoleCollection; policySetInRoleCollection.Run();
	//UNIX_CollectedBufferPoolFixture collectedBufferPool; collectedBufferPool.Run();
	//UNIX_ClassifierElementUsesFilterListFixture classifierElementUsesFilterList; classifierElementUsesFilterList.Run();
	//UNIX_BIOSLoadedInNVFixture bIOSLoadedInNV; bIOSLoadedInNV.Run();
	//UNIX_LogInStorageFixture logInStorage; logInStorage.Run();
	//UNIX_UseOfLogFixture useOfLog; useOfLog.Run();
	//UNIX_UseOfMessageLogFixture useOfMessageLog; useOfMessageLog.Run();
	//UNIX_OperationLogFixture operationLog; operationLog.Run();
	//UNIX_FilterOfSecurityAssociationFixture filterOfSecurityAssociation; filterOfSecurityAssociation.Run();
	//UNIX_ElementAsUserFixture elementAsUser; elementAsUser.Run();
	//UNIX_MemoryWithMediaFixture memoryWithMedia; memoryWithMedia.Run();
	//UNIX_WakeUpServiceOnNetworkPortFixture wakeUpServiceOnNetworkPort; wakeUpServiceOnNetworkPort.Run();
	//UNIX_WakeUpServiceOnNetworkAdapterFixture wakeUpServiceOnNetworkAdapter; wakeUpServiceOnNetworkAdapter.Run();
	//UNIX_WakeUpServiceOnModemFixture wakeUpServiceOnModem; wakeUpServiceOnModem.Run();
	//UNIX_OOBAlertServiceOnNetworkPortFixture oOBAlertServiceOnNetworkPort; oOBAlertServiceOnNetworkPort.Run();
	//UNIX_OOBAlertServiceOnModemFixture oOBAlertServiceOnModem; oOBAlertServiceOnModem.Run();
	//UNIX_OOBAlertServiceOnNetworkAdapterFixture oOBAlertServiceOnNetworkAdapter; oOBAlertServiceOnNetworkAdapter.Run();
	//UNIX_AuthorizationSubjectFixture authorizationSubject; authorizationSubject.Run();
	//UNIX_DockedFixture docked; docked.Run();
	//UNIX_SoftwareFeatureSAPImplementationFixture softwareFeatureSAPImplementation; softwareFeatureSAPImplementation.Run();
	//UNIX_TransparentBridgingStaticForwardingFixture transparentBridgingStaticForwarding; transparentBridgingStaticForwarding.Run();
	//UNIX_ResidesOnExtentFixture residesOnExtent; residesOnExtent.Run();
	//UNIX_RemoteAccessAvailableToElementFixture remoteAccessAvailableToElement; remoteAccessAvailableToElement.Run();
	//UNIX_PeerGatewayForPreconfiguredTunnelFixture peerGatewayForPreconfiguredTunnel; peerGatewayForPreconfiguredTunnel.Run();
	//UNIX_AccessLabelReaderFixture accessLabelReader; accessLabelReader.Run();
	//UNIX_PickerLabelReaderFixture pickerLabelReader; pickerLabelReader.Run();
	//UNIX_ManagesAccountFixture managesAccount; managesAccount.Run();
	//UNIX_BootOSFromFSFixture bootOSFromFS; bootOSFromFS.Run();
	//UNIX_ApplicationSystemDependencyFixture applicationSystemDependency; applicationSystemDependency.Run();
	//UNIX_ElementViewFixture elementView; elementView.Run();
	//UNIX_RoutesBGPFixture routesBGP; routesBGP.Run();
	//UNIX_SecurityServiceUsesAccountFixture securityServiceUsesAccount; securityServiceUsesAccount.Run();
	//UNIX_LastAppliedSnapshotFixture lastAppliedSnapshot; lastAppliedSnapshot.Run();
	//UNIX_AllocatedFromStoragePoolFixture allocatedFromStoragePool; allocatedFromStoragePool.Run();
	//UNIX_AssociatedBatteryFixture associatedBattery; associatedBattery.Run();
	//UNIX_RunningOSFixture runningOS; runningOS.Run();
	//UNIX_ReferencedProfileFixture referencedProfile; referencedProfile.Run();
	//UNIX_SubProfileRequiresProfileFixture subProfileRequiresProfile; subProfileRequiresProfile.Run();
	//UNIX_ClassifierFilterSetFixture classifierFilterSet; classifierFilterSet.Run();
	//UNIX_RequireCredentialsFromFixture requireCredentialsFrom; requireCredentialsFrom.Run();
	//UNIX_PickerForChangerFixture pickerForChanger; pickerForChanger.Run();
	//UNIX_QueueHierarchyFixture queueHierarchy; queueHierarchy.Run();
	//UNIX_EGPRouteCalcDependencyFixture eGPRouteCalcDependency; eGPRouteCalcDependency.Run();
	//UNIX_SchedulerUsedFixture schedulerUsed; schedulerUsed.Run();
	//UNIX_RelatedSpanningTreeFixture relatedSpanningTree; relatedSpanningTree.Run();
	//UNIX_CalculationBasedOnQueueFixture calculationBasedOnQueue; calculationBasedOnQueue.Run();
	//UNIX_ServiceUsesSecurityServiceFixture serviceUsesSecurityService; serviceUsesSecurityService.Run();
	//UNIX_CalculationServiceForDropperFixture calculationServiceForDropper; calculationServiceForDropper.Run();
	//UNIX_SecurityServiceForSystemFixture securityServiceForSystem; securityServiceForSystem.Run();
	//UNIX_ManagesAccountOnSystemFixture managesAccountOnSystem; managesAccountOnSystem.Run();
	//UNIX_DiagnosticTestForMSEFixture diagnosticTestForMSE; diagnosticTestForMSE.Run();
	//UNIX_MoreGroupInfoFixture moreGroupInfo; moreGroupInfo.Run();
	//UNIX_SparedFixture spared; spared.Run();
	//UNIX_QueueAllocationFixture queueAllocation; queueAllocation.Run();
	//UNIX_AssociatedProcessorMemoryFixture associatedProcessorMemory; associatedProcessorMemory.Run();
	//UNIX_AssociatedCacheMemoryFixture associatedCacheMemory; associatedCacheMemory.Run();
	//UNIX_SystemAdministratorRoleFixture systemAdministratorRole; systemAdministratorRole.Run();
	//UNIX_ElementInConnectorFixture elementInConnector; elementInConnector.Run();
	//UNIX_PackageInConnectorFixture packageInConnector; packageInConnector.Run();
	//UNIX_PackageInSlotFixture packageInSlot; packageInSlot.Run();
	//UNIX_CardInSlotFixture cardInSlot; cardInSlot.Run();
	//UNIX_AcceptCredentialFromFixture acceptCredentialFrom; acceptCredentialFrom.Run();
	//UNIX_CommMechanismForObjectManagerAdapterFixture commMechanismForObjectManagerAdapter; commMechanismForObjectManagerAdapter.Run();
	//UNIX_ElementSoftwareIdentityFixture elementSoftwareIdentity; elementSoftwareIdentity.Run();
	//UNIX_MoreOrgUnitInfoFixture moreOrgUnitInfo; moreOrgUnitInfo.Run();
	//UNIX_HostedNetworkPipeFixture hostedNetworkPipe; hostedNetworkPipe.Run();
	//UNIX_HostedFilterListFixture hostedFilterList; hostedFilterList.Run();
	//UNIX_HostedACIFixture hostedACI; hostedACI.Run();
	//UNIX_HostedRoutingServicesFixture hostedRoutingServices; hostedRoutingServices.Run();
	//UNIX_HostedClusterServiceFixture hostedClusterService; hostedClusterService.Run();
	//UNIX_HostedForwardingServicesFixture hostedForwardingServices; hostedForwardingServices.Run();
	//UNIX_HostedBootServiceFixture hostedBootService; hostedBootService.Run();
	//UNIX_SharingDependencyFixture sharingDependency; sharingDependency.Run();
	//UNIX_HostedJobDestinationFixture hostedJobDestination; hostedJobDestination.Run();
	//UNIX_HostedBGPPeerGroupFixture hostedBGPPeerGroup; hostedBGPPeerGroup.Run();
	//UNIX_NetworkServicesInAdminDomainFixture networkServicesInAdminDomain; networkServicesInAdminDomain.Run();
	//UNIX_HostedBGPRouteMapFixture hostedBGPRouteMap; hostedBGPRouteMap.Run();
	//UNIX_ScopedSettingFixture scopedSetting; scopedSetting.Run();
	//UNIX_HostedClusterSAPFixture hostedClusterSAP; hostedClusterSAP.Run();
	//UNIX_HostedBootSAPFixture hostedBootSAP; hostedBootSAP.Run();
	//UNIX_HostedBGPAttributesFixture hostedBGPAttributes; hostedBGPAttributes.Run();
	//UNIX_HostedAuthenticationRequirementFixture hostedAuthenticationRequirement; hostedAuthenticationRequirement.Run();
	//UNIX_SettingForSystemFixture settingForSystem; settingForSystem.Run();
	//UNIX_HostedFilterEntryBaseFixture hostedFilterEntryBase; hostedFilterEntryBase.Run();
	//UNIX_ConfigurationForSystemFixture configurationForSystem; configurationForSystem.Run();
	//UNIX_PolicyRuleInSystemFixture policyRuleInSystem; policyRuleInSystem.Run();
	//UNIX_PolicyGroupInSystemFixture policyGroupInSystem; policyGroupInSystem.Run();
	//UNIX_PolicyActionInPolicyRepositoryFixture policyActionInPolicyRepository; policyActionInPolicyRepository.Run();
	//UNIX_ReusablePolicyFixture reusablePolicy; reusablePolicy.Run();
	//UNIX_PolicyConditionInPolicyRepositoryFixture policyConditionInPolicyRepository; policyConditionInPolicyRepository.Run();
	//UNIX_HostedRouteFixture hostedRoute; hostedRoute.Run();
	//UNIX_HostedCollectionFixture hostedCollection; hostedCollection.Run();
	//UNIX_PolicyRoleCollectionInSystemFixture policyRoleCollectionInSystem; policyRoleCollectionInSystem.Run();
	//UNIX_NamespaceInManagerFixture namespaceInManager; namespaceInManager.Run();
	//UNIX_DatabaseControlFileFixture databaseControlFile; databaseControlFile.Run();
	//UNIX_HostedAdminDistanceFixture hostedAdminDistance; hostedAdminDistance.Run();
	//UNIX_HostedRoutingPolicyFixture hostedRoutingPolicy; hostedRoutingPolicy.Run();
	//UNIX_HostingCSFixture hostingCS; hostingCS.Run();
	//UNIX_FibrePortOnFCAdapterFixture fibrePortOnFCAdapter; fibrePortOnFCAdapter.Run();
	//UNIX_USBPortOnHubFixture uSBPortOnHub; uSBPortOnHub.Run();
	//UNIX_PhysicalMediaInLocationFixture physicalMediaInLocation; physicalMediaInLocation.Run();
	//UNIX_QueueForPrintServiceFixture queueForPrintService; queueForPrintService.Run();
	//UNIX_OSPFServiceConfigurationFixture oSPFServiceConfiguration; oSPFServiceConfiguration.Run();
	//UNIX_DeviceSAPImplementationFixture deviceSAPImplementation; deviceSAPImplementation.Run();
	//UNIX_PortImplementsEndpointFixture portImplementsEndpoint; portImplementsEndpoint.Run();
	//UNIX_USBConnectionFixture uSBConnection; uSBConnection.Run();
	//UNIX_SerialInterfaceFixture serialInterface; serialInterface.Run();
	//UNIX_USBControllerHasHubFixture uSBControllerHasHub; uSBControllerHasHub.Run();
	//UNIX_SCSIInterfaceFixture sCSIInterface; sCSIInterface.Run();
	//UNIX_MountFixture mount; mount.Run();
	//UNIX_RouteForwardedByServiceFixture routeForwardedByService; routeForwardedByService.Run();
	//UNIX_ForwardedRoutesFixture forwardedRoutes; forwardedRoutes.Run();
	//UNIX_StorageSettingsAssociatedToCapabilitiesFixture storageSettingsAssociatedToCapabilities; storageSettingsAssociatedToCapabilities.Run();
	//UNIX_StorageSettingsGeneratedFromCapabilitiesFixture storageSettingsGeneratedFromCapabilities; storageSettingsGeneratedFromCapabilities.Run();
	//UNIX_TransparentBridgingDynamicForwardingFixture transparentBridgingDynamicForwarding; transparentBridgingDynamicForwarding.Run();
	//UNIX_MorePersonInfoFixture morePersonInfo; morePersonInfo.Run();
	//UNIX_ReflectorNonClientServiceFixture reflectorNonClientService; reflectorNonClientService.Run();
	//UNIX_SoftwareElementSAPImplementationFixture softwareElementSAPImplementation; softwareElementSAPImplementation.Run();
	//UNIX_MediaPresentFixture mediaPresent; mediaPresent.Run();
	//UNIX_RealizesPExtentFixture realizesPExtent; realizesPExtent.Run();
	//UNIX_RealizesDiskPartitionFixture realizesDiskPartition; realizesDiskPartition.Run();
	//UNIX_RealizesAggregatePExtentFixture realizesAggregatePExtent; realizesAggregatePExtent.Run();
	//UNIX_RealizedOnSideFixture realizedOnSide; realizedOnSide.Run();
	//UNIX_RealizesTapePartitionFixture realizesTapePartition; realizesTapePartition.Run();
	//UNIX_DeviceSoftwareFixture deviceSoftware; deviceSoftware.Run();
	//UNIX_SwitchPortStaticForwardingFixture switchPortStaticForwarding; switchPortStaticForwarding.Run();
	//UNIX_SystemAdministratorGroupFixture systemAdministratorGroup; systemAdministratorGroup.Run();
	//UNIX_LibraryPackageFixture libraryPackage; libraryPackage.Run();
	//UNIX_ComputerSystemPackageFixture computerSystemPackage; computerSystemPackage.Run();
	//UNIX_OrderedDependencyFixture orderedDependency; orderedDependency.Run();
	//UNIX_UsersAccountFixture usersAccount; usersAccount.Run();
	//UNIX_ResourceAllocationFromPoolFixture resourceAllocationFromPool; resourceAllocationFromPool.Run();
	//UNIX_SoftwareFeatureServiceImplementationFixture softwareFeatureServiceImplementation; softwareFeatureServiceImplementation.Run();
	//UNIX_SnapshotOfExtentFixture snapshotOfExtent; snapshotOfExtent.Run();
	//UNIX_SoftwareElementServiceImplementationFixture softwareElementServiceImplementation; softwareElementServiceImplementation.Run();
	//UNIX_ProcessExecutableFixture processExecutable; processExecutable.Run();
	//UNIX_AssociatedSupplyVoltageSensorFixture associatedSupplyVoltageSensor; associatedSupplyVoltageSensor.Run();
	//UNIX_AssociatedSupplyCurrentSensorFixture associatedSupplyCurrentSensor; associatedSupplyCurrentSensor.Run();
	//UNIX_JobDestinationJobsFixture jobDestinationJobs; jobDestinationJobs.Run();
	//UNIX_OwningPrintQueueFixture owningPrintQueue; owningPrintQueue.Run();
	//UNIX_IsSpareFixture isSpare; isSpare.Run();
	//UNIX_PrinterServicingJobFixture printerServicingJob; printerServicingJob.Run();
	//UNIX_BGPRoutingPolicyFixture bGPRoutingPolicy; bGPRoutingPolicy.Run();
	//UNIX_DatabaseAdministratorFixture databaseAdministrator; databaseAdministrator.Run();
	//UNIX_TrustHierarchyFixture trustHierarchy; trustHierarchy.Run();
	//UNIX_RangesOfConfigurationFixture rangesOfConfiguration; rangesOfConfiguration.Run();
	//UNIX_HeadTailDropQueueBindingFixture headTailDropQueueBinding; headTailDropQueueBinding.Run();
	//UNIX_DoorAccessToPhysicalElementFixture doorAccessToPhysicalElement; doorAccessToPhysicalElement.Run();
	//UNIX_IPsecPolicyForEndpointFixture iPsecPolicyForEndpoint; iPsecPolicyForEndpoint.Run();
	//UNIX_LogInDataFileFixture logInDataFile; logInDataFile.Run();
	//UNIX_ParticipatingCSFixture participatingCS; participatingCS.Run();
	//UNIX_AssociatedDatabaseSystemFixture associatedDatabaseSystem; associatedDatabaseSystem.Run();
	//UNIX_SnapshotOfVirtualSystemFixture snapshotOfVirtualSystem; snapshotOfVirtualSystem.Run();
	//UNIX_MetricForMEFixture metricForME; metricForME.Run();
	//UNIX_IdentificationOfManagedSystemFixture identificationOfManagedSystem; identificationOfManagedSystem.Run();
	//UNIX_IngressConditioningServiceOnEndpointFixture ingressConditioningServiceOnEndpoint; ingressConditioningServiceOnEndpoint.Run();
	//UNIX_SwitchPortSourceRoutingFixture switchPortSourceRouting; switchPortSourceRouting.Run();
	//UNIX_VLANForFixture vLANFor; vLANFor.Run();
	//UNIX_SwitchPortSpanningTreeFixture switchPortSpanningTree; switchPortSpanningTree.Run();
	//UNIX_CalculatesAmongFixture calculatesAmong; calculatesAmong.Run();
	//UNIX_RelatedTransparentBridgingServiceFixture relatedTransparentBridgingService; relatedTransparentBridgingService.Run();
	//UNIX_EgressConditioningServiceOnEndpointFixture egressConditioningServiceOnEndpoint; egressConditioningServiceOnEndpoint.Run();
	//UNIX_ForwardsAmongFixture forwardsAmong; forwardsAmong.Run();
	//UNIX_SwitchesAmongFixture switchesAmong; switchesAmong.Run();
	//UNIX_BGPAttributesForRouteFixture bGPAttributesForRoute; bGPAttributesForRoute.Run();
	//UNIX_EndpointOfNetworkPipeFixture endpointOfNetworkPipe; endpointOfNetworkPipe.Run();
	//UNIX_IKESecretIsNamedFixture iKESecretIsNamed; iKESecretIsNamed.Run();
	//UNIX_KDCIssuesKerberosTicketFixture kDCIssuesKerberosTicket; kDCIssuesKerberosTicket.Run();
	//UNIX_SharedSecretIsSharedFixture sharedSecretIsShared; sharedSecretIsShared.Run();
	//UNIX_LocallyManagedPublicKeyFixture locallyManagedPublicKey; locallyManagedPublicKey.Run();
	//UNIX_CASignsPublicKeyCertificateFixture cASignsPublicKeyCertificate; cASignsPublicKeyCertificate.Run();
	//UNIX_RouteUsesEndpointFixture routeUsesEndpoint; routeUsesEndpoint.Run();
	//UNIX_MetricDefForMEFixture metricDefForME; metricDefForME.Run();
	//UNIX_AllocatedResourceFixture allocatedResource; allocatedResource.Run();
	//UNIX_AllocatedDMAFixture allocatedDMA; allocatedDMA.Run();
	//UNIX_AuthenticationTargetFixture authenticationTarget; authenticationTarget.Run();
	//UNIX_FilterListsInBGPRouteMapFixture filterListsInBGPRouteMap; filterListsInBGPRouteMap.Run();
	//UNIX_MoreRoleInfoFixture moreRoleInfo; moreRoleInfo.Run();
	//UNIX_ElementsLinkedFixture elementsLinked; elementsLinked.Run();
	//UNIX_DiagnosticTestSoftwareFixture diagnosticTestSoftware; diagnosticTestSoftware.Run();
	//UNIX_FilterOfPacketConditionFixture filterOfPacketCondition; filterOfPacketCondition.Run();
	//UNIX_RuleThatGeneratedSAFixture ruleThatGeneratedSA; ruleThatGeneratedSA.Run();
	//UNIX_AdapterActiveConnectionFixture adapterActiveConnection; adapterActiveConnection.Run();
	//UNIX_MetricInstanceFixture metricInstance; metricInstance.Run();
	//UNIX_AssociatedIndicatorLEDFixture associatedIndicatorLED; associatedIndicatorLED.Run();
	//UNIX_AuthorizedUseFixture authorizedUse; authorizedUse.Run();
	//UNIX_HomeForMediaFixture homeForMedia; homeForMedia.Run();
	//UNIX_ReflectorServiceFixture reflectorService; reflectorService.Run();
	//UNIX_Phase1SAUsedForPhase2Fixture phase1SAUsedForPhase2; phase1SAUsedForPhase2.Run();
	//UNIX_LogicalDiskBasedOnVolumeFixture logicalDiskBasedOnVolume; logicalDiskBasedOnVolume.Run();
	//UNIX_LogicalDiskBasedOnVolumeSetFixture logicalDiskBasedOnVolumeSet; logicalDiskBasedOnVolumeSet.Run();
	//UNIX_LogicalDiskBasedOnPartitionFixture logicalDiskBasedOnPartition; logicalDiskBasedOnPartition.Run();
	//UNIX_ProtectedExtentBasedOnFixture protectedExtentBasedOn; protectedExtentBasedOn.Run();
	//UNIX_CompositeExtentBasedOnFixture compositeExtentBasedOn; compositeExtentBasedOn.Run();
	//UNIX_VolumeSetBasedOnPSExtentFixture volumeSetBasedOnPSExtent; volumeSetBasedOnPSExtent.Run();
	//UNIX_AggregatePSExtentBasedOnPExtentFixture aggregatePSExtentBasedOnPExtent; aggregatePSExtentBasedOnPExtent.Run();
	//UNIX_AggregatePSExtentBasedOnAggregatePExtentFixture aggregatePSExtentBasedOnAggregatePExtent; aggregatePSExtentBasedOnAggregatePExtent.Run();
	//UNIX_DiskPartitionBasedOnVolumeFixture diskPartitionBasedOnVolume; diskPartitionBasedOnVolume.Run();
	//UNIX_TapePartitionOnSurfaceFixture tapePartitionOnSurface; tapePartitionOnSurface.Run();
	//UNIX_PSExtentBasedOnPExtentFixture pSExtentBasedOnPExtent; pSExtentBasedOnPExtent.Run();
	//UNIX_PackageAlarmFixture packageAlarm; packageAlarm.Run();
	//UNIX_PackageTempSensorFixture packageTempSensor; packageTempSensor.Run();
	//UNIX_PackageCoolingFixture packageCooling; packageCooling.Run();
	//UNIX_DeviceAccessedByFileFixture deviceAccessedByFile; deviceAccessedByFile.Run();
	//UNIX_SwitchPortDynamicForwardingFixture switchPortDynamicForwarding; switchPortDynamicForwarding.Run();
	//UNIX_ConditioningServiceOnEndpointFixture conditioningServiceOnEndpoint; conditioningServiceOnEndpoint.Run();
	//UNIX_DoorAccessToDeviceFixture doorAccessToDevice; doorAccessToDevice.Run();
	//UNIX_LogInDeviceFileFixture logInDeviceFile; logInDeviceFile.Run();
	//UNIX_RecordAppliesToElementFixture recordAppliesToElement; recordAppliesToElement.Run();
	//UNIX_QueueForwardsToPrintSAPFixture queueForwardsToPrintSAP; queueForwardsToPrintSAP.Run();
	//UNIX_LibraryExchangeFixture libraryExchange; libraryExchange.Run();
	//UNIX_IPsecPolicyForSystemFixture iPsecPolicyForSystem; iPsecPolicyForSystem.Run();
	//UNIX_CommMechanismForAdapterFixture commMechanismForAdapter; commMechanismForAdapter.Run();
	//UNIX_ConcreteDependencyFixture concreteDependency; concreteDependency.Run();
	//UNIX_CalculatedRoutesFixture calculatedRoutes; calculatedRoutes.Run();
	//UNIX_PortActiveConnectionFixture portActiveConnection; portActiveConnection.Run();
	//UNIX_AssociatedAlarmFixture associatedAlarm; associatedAlarm.Run();
	//UNIX_TransformOfPreconfiguredActionFixture transformOfPreconfiguredAction; transformOfPreconfiguredAction.Run();
	//UNIX_UsersCredentialFixture usersCredential; usersCredential.Run();
	//UNIX_PublicPrivateKeyPairFixture publicPrivateKeyPair; publicPrivateKeyPair.Run();
	//UNIX_NotaryVerifiesBiometricFixture notaryVerifiesBiometric; notaryVerifiesBiometric.Run();
	//UNIX_AreaOfConfigurationFixture areaOfConfiguration; areaOfConfiguration.Run();
	//UNIX_BGPAdminDistanceFixture bGPAdminDistance; bGPAdminDistance.Run();
	//UNIX_PeerGatewayForTunnelFixture peerGatewayForTunnel; peerGatewayForTunnel.Run();
	//UNIX_ElementAllocatedFromPoolFixture elementAllocatedFromPool; elementAllocatedFromPool.Run();
	//UNIX_AuthenticateForUseFixture authenticateForUse; authenticateForUse.Run();
	//UNIX_DeviceServicesLocationFixture deviceServicesLocation; deviceServicesLocation.Run();
	//UNIX_PeerOfSAEndpointFixture peerOfSAEndpoint; peerOfSAEndpoint.Run();
	//UNIX_ProtocolControllerForUnitFixture protocolControllerForUnit; protocolControllerForUnit.Run();
	//UNIX_ProtocolControllerForPortFixture protocolControllerForPort; protocolControllerForPort.Run();
	//UNIX_ProtocolControllerAccessesUnitFixture protocolControllerAccessesUnit; protocolControllerAccessesUnit.Run();
	//UNIX_AssociatedProtocolControllerFixture associatedProtocolController; associatedProtocolController.Run();
	//UNIX_CAHasPublicCertificateFixture cAHasPublicCertificate; cAHasPublicCertificate.Run();
	//UNIX_InboundVLANFixture inboundVLAN; inboundVLAN.Run();
	//UNIX_ActiveConnectionFixture activeConnection; activeConnection.Run();
	//UNIX_SwitchableFixture switchable; switchable.Run();
	//UNIX_OutboundVLANFixture outboundVLAN; outboundVLAN.Run();
	//UNIX_EndpointForIPNetworkConnectionFixture endpointForIPNetworkConnection; endpointForIPNetworkConnection.Run();
	//UNIX_SwitchPortPairFixture switchPortPair; switchPortPair.Run();
	//UNIX_BGPPeerGroupServiceFixture bGPPeerGroupService; bGPPeerGroupService.Run();
	//UNIX_AuthorizationTargetFixture authorizationTarget; authorizationTarget.Run();
	//UNIX_ReflectorClientServiceFixture reflectorClientService; reflectorClientService.Run();
	//UNIX_SystemAdministratorFixture systemAdministrator; systemAdministrator.Run();
	//UNIX_MoreOrganizationInfoFixture moreOrganizationInfo; moreOrganizationInfo.Run();
	//UNIX_PrinterServicingQueueFixture printerServicingQueue; printerServicingQueue.Run();
	//UNIX_ProvidesEndpointFixture providesEndpoint; providesEndpoint.Run();
	//UNIX_CommMechanismForManagerFixture commMechanismForManager; commMechanismForManager.Run();
	//UNIX_ClusterServiceAccessBySAPFixture clusterServiceAccessBySAP; clusterServiceAccessBySAP.Run();
	//UNIX_BootServiceAccessBySAPFixture bootServiceAccessBySAP; bootServiceAccessBySAP.Run();
	//UNIX_AssociatedNextHopFixture associatedNextHop; associatedNextHop.Run();
	//UNIX_SuppliesPowerFixture suppliesPower; suppliesPower.Run();
	//UNIX_ConnectedToFixture connectedTo; connectedTo.Run();
	//UNIX_SlotInSlotFixture slotInSlot; slotInSlot.Run();
	//UNIX_AccountMapsToAccountFixture accountMapsToAccount; accountMapsToAccount.Run();
	//UNIX_AssociatedCoolingFixture associatedCooling; associatedCooling.Run();
	//UNIX_CollectionInSystemFixture collectionInSystem; collectionInSystem.Run();
	//UNIX_ReplaceableProductFRUFixture replaceableProductFRU; replaceableProductFRU.Run();
	//UNIX_ElementCapabilitiesFixture elementCapabilities; elementCapabilities.Run();
	//UNIX_ElementProfileFixture elementProfile; elementProfile.Run();
	//UNIX_AuthorizedTargetFixture authorizedTarget; authorizedTarget.Run();
	//UNIX_ErrorFixture error; error.Run();
	//UNIX_ProductFRUFixture productFRU; productFRU.Run();
	//UNIX_FromDirectorySpecificationFixture fromDirectorySpecification; fromDirectorySpecification.Run();
	//UNIX_RecordInLogFixture recordInLog; recordInLog.Run();
	//UNIX_CollectionSettingFixture collectionSetting; collectionSetting.Run();
	//UNIX_CollectionConfigurationFixture collectionConfiguration; collectionConfiguration.Run();
	//UNIX_SystemInNamespaceFixture systemInNamespace; systemInNamespace.Run();
	//UNIX_ElementCapacityFixture elementCapacity; elementCapacity.Run();
	//UNIX_ProductSoftwareFeaturesFixture productSoftwareFeatures; productSoftwareFeatures.Run();
	//UNIX_ProductParentChildFixture productParentChild; productParentChild.Run();
	//UNIX_StorageDefectFixture storageDefect; storageDefect.Run();
	//UNIX_CollectionInOrganizationFixture collectionInOrganization; collectionInOrganization.Run();
	//UNIX_ServiceAffectsElementFixture serviceAffectsElement; serviceAffectsElement.Run();
	//UNIX_FRUIncludesProductFixture fRUIncludesProduct; fRUIncludesProduct.Run();
	//UNIX_OwningCollectionElementFixture owningCollectionElement; owningCollectionElement.Run();
	//UNIX_SystemSettingContextFixture systemSettingContext; systemSettingContext.Run();
	//UNIX_ElementLocationFixture elementLocation; elementLocation.Run();
	//UNIX_ServiceAvailableToElementFixture serviceAvailableToElement; serviceAvailableToElement.Run();
	//UNIX_ActionSequenceFixture actionSequence; actionSequence.Run();
	//UNIX_DiagnosticResultForTestFixture diagnosticResultForTest; diagnosticResultForTest.Run();
	//UNIX_DiagnosticResultForMSEFixture diagnosticResultForMSE; diagnosticResultForMSE.Run();
	//UNIX_CompatibleProductFixture compatibleProduct; compatibleProduct.Run();
	//UNIX_SCSIInitiatorTargetLogicalUnitPathFixture sCSIInitiatorTargetLogicalUnitPath; sCSIInitiatorTargetLogicalUnitPath.Run();
	//UNIX_FRUIncludesSoftwareFeatureFixture fRUIncludesSoftwareFeature; fRUIncludesSoftwareFeature.Run();
	//UNIX_InstalledSoftwareIdentityFixture installedSoftwareIdentity; installedSoftwareIdentity.Run();
	//UNIX_InstalledSoftwareElementFixture installedSoftwareElement; installedSoftwareElement.Run();
	//UNIX_FibrePortActiveLoginFixture fibrePortActiveLogin; fibrePortActiveLogin.Run();
	//UNIX_CollectedCollectionsFixture collectedCollections; collectedCollections.Run();
	//UNIX_ElementConfigurationFixture elementConfiguration; elementConfiguration.Run();
	//UNIX_CorrespondingSettingDataRecordFixture correspondingSettingDataRecord; correspondingSettingDataRecord.Run();
	//UNIX_AffectedJobElementFixture affectedJobElement; affectedJobElement.Run();
	//UNIX_NetworksInAdminDomainFixture networksInAdminDomain; networksInAdminDomain.Run();
	//UNIX_OwningJobElementFixture owningJobElement; owningJobElement.Run();
	//UNIX_ToDirectoryActionFixture toDirectoryAction; toDirectoryAction.Run();
	//UNIX_SAPAvailableForElementFixture sAPAvailableForElement; sAPAvailableForElement.Run();
	//UNIX_DiagnosticResultInPackageFixture diagnosticResultInPackage; diagnosticResultInPackage.Run();
	//UNIX_RelatedStatisticsFixture relatedStatistics; relatedStatistics.Run();
	//UNIX_BGPClustersInASFixture bGPClustersInAS; bGPClustersInAS.Run();
	//UNIX_CredentialContextFixture credentialContext; credentialContext.Run();
	//UNIX_FromDirectoryActionFixture fromDirectoryAction; fromDirectoryAction.Run();
	//UNIX_AFRelatedServicesFixture aFRelatedServices; aFRelatedServices.Run();
	//UNIX_RoleLimitedToTargetFixture roleLimitedToTarget; roleLimitedToTarget.Run();
	//UNIX_ActsAsSpareFixture actsAsSpare; actsAsSpare.Run();
	//UNIX_OrgStructureFixture orgStructure; orgStructure.Run();
	//UNIX_AssociatedJobMethodResultFixture associatedJobMethodResult; associatedJobMethodResult.Run();
	//UNIX_SettingContextFixture settingContext; settingContext.Run();
	//UNIX_FRUPhysicalElementsFixture fRUPhysicalElements; fRUPhysicalElements.Run();
	//UNIX_ElementStatisticalDataFixture elementStatisticalData; elementStatisticalData.Run();
	//UNIX_NextServiceFixture nextService; nextService.Run();
	//UNIX_LogicalNetworkServiceFixture logicalNetworkService; logicalNetworkService.Run();
	//UNIX_ElementSettingFixture elementSetting; elementSetting.Run();
	//UNIX_DependencyContextFixture dependencyContext; dependencyContext.Run();
	//UNIX_ProductSupportFixture productSupport; productSupport.Run();
	//UNIX_RelatedStatisticalDataFixture relatedStatisticalData; relatedStatisticalData.Run();
	//UNIX_ElementSecuritySensitivityFixture elementSecuritySensitivity; elementSecuritySensitivity.Run();
	//UNIX_AssignedIdentityFixture assignedIdentity; assignedIdentity.Run();
	//UNIX_SynchronizedFixture synchronized; synchronized.Run();
	//UNIX_CorrespondingSettingsRecordFixture correspondingSettingsRecord; correspondingSettingsRecord.Run();
	//UNIX_LogManagesRecordFixture logManagesRecord; logManagesRecord.Run();
	//UNIX_ServiceProcessFixture serviceProcess; serviceProcess.Run();
	//UNIX_NextServiceAfterMeterFixture nextServiceAfterMeter; nextServiceAfterMeter.Run();
	//UNIX_QueueToScheduleFixture queueToSchedule; queueToSchedule.Run();
	//UNIX_ApplicationSystemDirectoryFixture applicationSystemDirectory; applicationSystemDirectory.Run();
	//UNIX_PolicySetAppliesToElementFixture policySetAppliesToElement; policySetAppliesToElement.Run();
	//UNIX_ParameterValueSourcesFixture parameterValueSources; parameterValueSources.Run();
	//UNIX_DirectorySpecificationFileFixture directorySpecificationFile; directorySpecificationFile.Run();
	//UNIX_AssociatedPrivilegeFixture associatedPrivilege; associatedPrivilege.Run();
	//UNIX_ParametersForMethodFixture parametersForMethod; parametersForMethod.Run();
	//UNIX_ExportFixture export; export.Run();
	//UNIX_ElementConformsToProfileFixture elementConformsToProfile; elementConformsToProfile.Run();
	//UNIX_AdjacentSlotsFixture adjacentSlots; adjacentSlots.Run();
	//UNIX_ProductPhysicalElementsFixture productPhysicalElements; productPhysicalElements.Run();
	//UNIX_IdentityContextFixture identityContext; identityContext.Run();
	//UNIX_ToDirectorySpecificationFixture toDirectorySpecification; toDirectorySpecification.Run();
	//UNIX_InstalledProductImageFixture installedProductImage; installedProductImage.Run();
	//UNIX_ProductProductDependencyFixture productProductDependency; productProductDependency.Run();
	//UNIX_DiagnosticResultFixture diagnosticResult; diagnosticResult.Run();
	//UNIX_SchedulingServiceToScheduleFixture schedulingServiceToSchedule; schedulingServiceToSchedule.Run();
	//UNIX_AbstractIndicationSubscriptionFixture abstractIndicationSubscription; abstractIndicationSubscription.Run();
	//UNIX_AuthorizedSubjectFixture authorizedSubject; authorizedSubject.Run();
	//UNIX_SettingsDefineStateFixture settingsDefineState; settingsDefineState.Run();
	//UNIX_SoftwareElementActionsFixture softwareElementActions; softwareElementActions.Run();
	//UNIX_SoftwareElementChecksFixture softwareElementChecks; softwareElementChecks.Run();
	//UNIX_AssociatedBlockStatisticsManifestCollectionFixture associatedBlockStatisticsManifestCollection; associatedBlockStatisticsManifestCollection.Run();
	//UNIX_ParticipatesInSetFixture participatesInSet; participatesInSet.Run();
	//UNIX_ConfigurationComponentFixture configurationComponent; configurationComponent.Run();
	//UNIX_CurrentTimeFixture currentTime; currentTime.Run();

}

