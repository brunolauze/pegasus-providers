
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixProcessDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixProcessDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixProcessDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixProcessDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixProcessDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixProcessDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixProcessDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixProcessDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixProcessDeps_TRU64.h"
#else
#	include "UNIX_UnixProcessDeps_STUB.h"
#endif
