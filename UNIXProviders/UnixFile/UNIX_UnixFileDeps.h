
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixFileDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixFileDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixFileDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixFileDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixFileDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixFileDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixFileDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixFileDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixFileDeps_TRU64.h"
#else
#	include "UNIX_UnixFileDeps_STUB.h"
#endif
