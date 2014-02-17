
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixProcessPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixProcessPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixProcessPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixProcessPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixProcessPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixProcessPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixProcessPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixProcessPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixProcessPrivate_TRU64.h"
#else
#	include "UNIX_UnixProcessPrivate_STUB.h"
#endif
