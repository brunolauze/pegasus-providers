
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixFilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixFilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixFilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixFilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixFilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixFilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixFilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixFilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixFilePrivate_TRU64.h"
#else
#	include "UNIX_UnixFilePrivate_STUB.h"
#endif
