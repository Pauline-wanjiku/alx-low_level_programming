#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all-function that returns the sum of all its parameters.
 *@n:variadic input
 *Return:sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, s = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (s);
}
