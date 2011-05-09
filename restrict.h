/**
 * \def restrict
 *
 * \brief Alias‐free pointer argument.
 *
 * A <tt>restrict</tt>‐qualified pointer argument must not be aliased by any
 * other argument.
 */

#if !(__STDC_VERSION__ >= 199901L)
#	if defined __GNUC__ || defined __clang__
#		define restrict __restrict__
#	else
#		define restrict
#	endif
#endif
