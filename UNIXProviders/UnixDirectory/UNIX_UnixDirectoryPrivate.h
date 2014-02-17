
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixDirectoryPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixDirectoryPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixDirectoryPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixDirectoryPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixDirectoryPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixDirectoryPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixDirectoryPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixDirectoryPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixDirectoryPrivate_TRU64.h"
#else
#	include "UNIX_UnixDirectoryPrivate_STUB.h"
#endif
