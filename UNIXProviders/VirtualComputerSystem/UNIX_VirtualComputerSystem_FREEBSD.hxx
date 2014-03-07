#ifdef PEGASUS_OS_FREEBSD


#ifndef __UNIX_VIRTUALCOMPUTERSYSTEM_PRIVATE_H
#define __UNIX_VIRTUALCOMPUTERSYSTEM_PRIVATE_H

#include "UNIX_VirtualComputerSystem.h"

class UNIX_JailComputerSystem :
	public UNIX_VirtualComputerSystem
{
public:

	UNIX_JailComputerSystem();
	~UNIX_JailComputerSystem();

	Boolean initialize();
	Boolean load(int&);
	Boolean finalize();
	Boolean find(Array<CIMKeyBinding>&);
	Boolean validateKey(CIMKeyBinding&) const { return false; };
	void setScope(CIMName scope) { currentScope = scope; };

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual Boolean getRoles(CIMProperty&) const;
	virtual Array<String> getRoles() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual Boolean getDedicated(CIMProperty&) const;
	virtual Array<Uint16> getDedicated() const;
	virtual Boolean getOtherDedicatedDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherDedicatedDescriptions() const;
	virtual Boolean getResetCapability(CIMProperty&) const;
	virtual Uint16 getResetCapability() const;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual Boolean getVirtualSystem(CIMProperty&) const;
	virtual String getVirtualSystem() const;

private:
	CIMName currentScope;

	static int sort_param(const void *a, const void *b);
	static char *noname(const char *name);
	static char *nononame(const char *name);
	static void quoted_print(char *str);
	int add_param(const char *name, void *value, size_t valuelen, struct jailparam *source, unsigned flags);
	String _get_param_String(const char *name) const;
	Uint32 _get_param_Uint32(const char *name) const;
	int ip6_ok;
	int ip4_ok;
	struct jailparam *params;
	int *param_parent;
	int nparams;
	int lastjid;
	int print_jail(int pflags, int jflags);

};


#endif


#endif
