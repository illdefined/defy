/**
 * \def noreturn
 *
 * \brief Function does not return.
 */

#if __STDC_VERSION__ >= 201000L
#	if __STDC_HOSTED__
#		include <stdnoreturn.h>
#	else
#		define noreturn _Noreturn
#	elif
#elif defined __clang__ || defined __GNUC__
#	define noreturn __attribute__ ((noreturn))
#else
#	define noreturn
#endif
