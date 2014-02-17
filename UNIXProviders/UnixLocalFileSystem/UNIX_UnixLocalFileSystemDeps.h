
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixLocalFileSystemDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixLocalFileSystemDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixLocalFileSystemDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixLocalFileSystemDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixLocalFileSystemDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixLocalFileSystemDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixLocalFileSystemDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixLocalFileSystemDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixLocalFileSystemDeps_TRU64.h"
#else
#	include "UNIX_UnixLocalFileSystemDeps_STUB.h"
#endif
