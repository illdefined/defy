/**
 * \def pure
 *
 * \brief Pure function
 *
 * A function marked pure has no side effects and the return value depends
 * solely on the parameters and global memory.
 */

#if defined __clang__ || defined __GNUC__
#	define pure __attribute__ ((pure))
#else
#	define pure
#endif
