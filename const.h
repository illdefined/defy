/**
 * \def defy_const
 *
 * \brief Constant function
 *
 * A function marked constant has no side effects and its return value depends
 * solely on the parameters. It must not read global memory.
 */

#if defined __clang__ || defined __GNUC__
#	define defy_const __attribute__ ((const))
#else
#	define defy_const
#endif
