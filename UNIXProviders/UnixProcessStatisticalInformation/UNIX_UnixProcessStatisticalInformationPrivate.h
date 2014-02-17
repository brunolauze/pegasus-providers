
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixProcessStatisticalInformationPrivate_TRU64.h"
#else
#	include "UNIX_UnixProcessStatisticalInformationPrivate_STUB.h"
#endif
