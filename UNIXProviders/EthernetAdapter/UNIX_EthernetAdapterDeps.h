
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EthernetAdapterDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EthernetAdapterDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EthernetAdapterDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EthernetAdapterDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EthernetAdapterDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EthernetAdapterDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EthernetAdapterDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EthernetAdapterDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EthernetAdapterDeps_TRU64.h"
#else
#	include "UNIX_EthernetAdapterDeps_STUB.h"
#endif
