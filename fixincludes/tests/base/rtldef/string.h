/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/rtldef/string.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( VMS_DECC_BUILTIN_CHECK )
define FD_ZERO(__p) memset((__p), 0, sizeof(*(__p)))

#endif  /* VMS_DECC_BUILTIN_CHECK */


#if defined( VMS_DISABLE_DECC_STRING_BUILTINS_CHECK )
#if !defined(__VAX) && !defined(__GNUC__)

#endif  /* VMS_DISABLE_DECC_STRING_BUILTINS_CHECK */