/**
 * \def perfect
 *
 * \brief Constant function
 *
 * A function marked perfect has no side effects and its return value depends
 * solely on the parameters. It must not read global memory.
 */

#if defined __clang__ || defined __GNUC__
#	define perfect __attribute__ ((const))
#else
#	define perfect
#endif
