#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned int
 * Return: Binary rep
 */
void print_binary(unsigned long int n)
{
	unsigned long int n1 = n, bin = 1;
	int len = 0;

	while (n1 > 0)
	{
		len++;
		n1 >>= 1;
	}
	len -= 1;

	if (len > 0)
		bin = bin << len;

	while (bin > 0)
	{
		if (n & bin)
		{
			_putchar('1');
		}
		else
			_putchar('0');
		bin >>= 1;
	}
}
