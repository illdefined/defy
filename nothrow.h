/**
 * \def nothrow
 *
 * \brief Function does not throw exceptions.
 */

#if !defined __cplusplus
#	if defined __clang__ || defined __GNUC__
#		define nothrow __attribute__ ((nothrow))
#	else
#		define nothrow
#	endif
#endif
