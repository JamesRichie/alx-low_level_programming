#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 *
 * Return: Integer
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (n / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
