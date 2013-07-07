/**
 * \def thread_local
 *
 * \brief Thread-local storage class.
 */

#if __STDC_VERSION__ >= 201000L && !defined __STDC_NO_THREADS__
#	if __STDC_HOSTED__
#		include <threads.h>
#	else
#		define thread_local _Thread_local
#	endif
#elif defined __GNUC__ || defined __clang__
#	define thread_local __thread
#else
#	error "No thread_local implementation"
#endif
