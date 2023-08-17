#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed
 * @n: Number of strings in function
 *
 * Return: Strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x = 0;
	char *s;

	va_start(args, n);
	for (; x < (int)n; x++)
	{
		s = va_arg(args, char *);
		printf("%s%s", s == NULL ? "(nil)" : s,
				x != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");
}
