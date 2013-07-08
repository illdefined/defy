/**
 * \def nothrow
 *
 * \brief Function does not throw exceptions.
 */

#if defined __cplusplus
#	if __cplusplus > 199711l
#		define nothrow noexcept
#	else
#		define nothrow throw()
#	endif
#elif defined __clang__ || defined __GNUC__
#	define nothrow __attribute__ ((nothrow))
#else
#	define nothrow
#endif
