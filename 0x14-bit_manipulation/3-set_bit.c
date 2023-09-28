#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at any given index
 * @n: number
 * @index: index with bit
 * Return: 1 for success || -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int num = 1;

	i = (sizeof(unsigned long int) * 8);
	if (index > i)
		return (-1);

	num <<= index;
	*n = (*n | num);

	return (1);
}
