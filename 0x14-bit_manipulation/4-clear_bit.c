#include "main.h"

/**
 * clear_bit - Sets the value of bit to 0
 * @index: Index of bit
 * @n: The bit to be entered
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
