
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_UnixProcessStatisticalInformationDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_UnixProcessStatisticalInformationDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_UnixProcessStatisticalInformationDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_UnixProcessStatisticalInformationDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_UnixProcessStatisticalInformationDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_UnixProcessStatisticalInformationDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_UnixProcessStatisticalInformationDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_UnixProcessStatisticalInformationDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_UnixProcessStatisticalInformationDeps_TRU64.h"
#else
#	include "UNIX_UnixProcessStatisticalInformationDeps_STUB.h"
#endif
