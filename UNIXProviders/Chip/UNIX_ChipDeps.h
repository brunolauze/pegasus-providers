
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ChipDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ChipDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ChipDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ChipDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ChipDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ChipDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ChipDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ChipDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ChipDeps_TRU64.h"
#else
#	include "UNIX_ChipDeps_STUB.h"
#endif
