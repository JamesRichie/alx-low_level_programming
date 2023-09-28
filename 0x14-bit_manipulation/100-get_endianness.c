#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 for little endian || 0 for big endian
 */
int get_endianness(void)
{
	int n = 0x01;
	char *c = (char *)&n;

	return (c[0]);
}
