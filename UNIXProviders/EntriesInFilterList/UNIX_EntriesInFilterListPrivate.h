
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_EntriesInFilterListPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_EntriesInFilterListPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_EntriesInFilterListPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_EntriesInFilterListPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_EntriesInFilterListPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_EntriesInFilterListPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_EntriesInFilterListPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_EntriesInFilterListPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_EntriesInFilterListPrivate_TRU64.h"
#else
#	include "UNIX_EntriesInFilterListPrivate_STUB.h"
#endif
