#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: Difference in bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned long int bit_diff;

	bit_diff = n ^ m;

	do {
		x += (bit_diff & 1);
		bit_diff >>= 1;
	}
	while
		(bit_diff > 0);

	return (x);
}
