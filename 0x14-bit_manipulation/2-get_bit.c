#include "main.h"

/**
 * get_bit - Returns value of bit of a given index
 * @index: Index of the bit
 * @n: Integer to be entered
 * Return: Index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
