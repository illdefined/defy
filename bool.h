/**
 * \typedef bool
 *
 * \brief Boolean type.
 *
 * A boolean variable can have a value of \c false or \c true.
 */

#if !defined __cplusplus
#	if __STDC_VERSION__ >= 199901l
#		if __STDC_HOSTED__
#			include <stdbool.h>
#		else
typedef _Bool bool;
#		endif
#	else
typedef char bool;
#	endif

#	if !defined false
#		define false ((bool) 0)
#	endif

#	if !defined true
#		define true  ((bool) 1)
#	endif
#endif
