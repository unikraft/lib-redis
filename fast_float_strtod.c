/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Replacement for the C++ fast_float-based implementation shipped with
 * Redis 8.  fast_float is a performance optimisation for parsing doubles;
 * providing a strtod() based implementation keeps the port free of a C++
 * toolchain dependency.  Redis already falls back to strtod() for inputs
 * fast_float does not handle, so behaviour is unchanged.
 */

#include <stdlib.h>

double fast_float_strtod(const char *in, char **out)
{
	return strtod(in, out);
}
