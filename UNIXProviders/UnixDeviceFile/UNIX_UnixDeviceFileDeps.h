
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixDeviceFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixDeviceFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixDeviceFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixDeviceFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixDeviceFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixDeviceFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixDeviceFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixDeviceFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixDeviceFileDeps_TRU64.h"
#else
#	include "UNIX_UnixDeviceFileDeps_STUB.h"
#endif
