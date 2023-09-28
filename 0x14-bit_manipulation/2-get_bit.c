#include "main.h"

/**
 * get_bit - returns value of given bit at given index
 * @n: number
 * @index: index starting from 0
 * Return: value of bit at index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;
	unsigned int y;

	y = (sizeof(unsigned long int) * 8);
	if  (index > y)
		return (-1);

	x = ((n >> index) & 1);
	return (x);
}
