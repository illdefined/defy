/**
 * \def defy_pure
 *
 * \brief Pure function
 *
 * A function marked pure has no side effects and the return value depends
 * solely on the parameters and global memory.
 */

#if defined __clang__ || defined __GNUC__
#	define defy_pure __attribute__ ((pure))
#else
#	define defy_pure
#endif
