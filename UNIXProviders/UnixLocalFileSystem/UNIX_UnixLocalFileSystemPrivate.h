
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixLocalFileSystemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixLocalFileSystemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixLocalFileSystemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixLocalFileSystemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixLocalFileSystemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixLocalFileSystemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixLocalFileSystemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixLocalFileSystemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixLocalFileSystemPrivate_TRU64.h"
#else
#	include "UNIX_UnixLocalFileSystemPrivate_STUB.h"
#endif
