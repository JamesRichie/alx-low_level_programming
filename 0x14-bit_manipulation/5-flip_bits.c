#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: First number
 * @m: Second number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, numbers = 0;
	unsigned long int current;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = x >> i;
		if (current & 1)
			numbers++;
	}

	return (numbers);
}
