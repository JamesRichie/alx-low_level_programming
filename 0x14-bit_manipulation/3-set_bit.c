#include "main.h"

/**
 * set_bit - Sets the vae of bit to 1
 * @index: Index of bit
 * @n: Bit entered
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
