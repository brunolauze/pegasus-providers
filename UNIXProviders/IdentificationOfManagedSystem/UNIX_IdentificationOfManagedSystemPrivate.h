
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IdentificationOfManagedSystemPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IdentificationOfManagedSystemPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IdentificationOfManagedSystemPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IdentificationOfManagedSystemPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IdentificationOfManagedSystemPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IdentificationOfManagedSystemPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IdentificationOfManagedSystemPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IdentificationOfManagedSystemPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IdentificationOfManagedSystemPrivate_TRU64.h"
#else
#	include "UNIX_IdentificationOfManagedSystemPrivate_STUB.h"
#endif
