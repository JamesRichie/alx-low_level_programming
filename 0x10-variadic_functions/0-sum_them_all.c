#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums all the parameters
 * @n: Number of parameters
 *
 * Return:
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, x = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (x < (int)n)
	{
		sum += va_arg(args, int);
		x++;
	}
	va_end(args);
	return (sum);
}
