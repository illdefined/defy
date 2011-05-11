/**
 * \def nil
 *
 * \brief Invalid address.
 */

#if defined __cplusplus
#	if __cplusplus > 199711l
#		define nil nullptr
#	else
#		define nil 0
#	endif
#elif __STDC_HOSTED__
#	include <stddef.h>
#	define nil NULL
#else
#	define nil ((void *) 0)
#endif
