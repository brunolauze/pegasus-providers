
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AssociatedJobMethodResultPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AssociatedJobMethodResultPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AssociatedJobMethodResultPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AssociatedJobMethodResultPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AssociatedJobMethodResultPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AssociatedJobMethodResultPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AssociatedJobMethodResultPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AssociatedJobMethodResultPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AssociatedJobMethodResultPrivate_TRU64.h"
#else
#	include "UNIX_AssociatedJobMethodResultPrivate_STUB.h"
#endif
