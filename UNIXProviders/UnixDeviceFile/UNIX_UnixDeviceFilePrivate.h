
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixDeviceFilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixDeviceFilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixDeviceFilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixDeviceFilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixDeviceFilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixDeviceFilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixDeviceFilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixDeviceFilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixDeviceFilePrivate_TRU64.h"
#else
#	include "UNIX_UnixDeviceFilePrivate_STUB.h"
#endif
