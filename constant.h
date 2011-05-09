/**
 * \def constant (expr)
 *
 * \brief Determine whether expression is a compile‐time constant.
 *
 * \param expr Expression.
 *
 * \return \c 1 if \a expr is known to be a compile‐time constant or
 * \c 0 otherwise.
 */

#if defined __clang__ || defined __GNUC__ || defined __TINYC__
#	define constant(expr) __builtin_constant_p (expr)
#else
#	define constant(expr) 0
#endif
