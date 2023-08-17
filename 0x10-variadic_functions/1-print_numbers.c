#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbersfolowed by anew line
 * @separator: String to be printed
 * @n: Number of integers
 *
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x = 0;

	va_start(args, n);
	for (; x < (int)n; x++)
	{
		printf("%d%s", va_arg(args, int),
				x != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");
}

