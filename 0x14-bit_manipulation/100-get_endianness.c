#include "main.h"

/**
 * get_endianness - checs the endiannes
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
