#include "main.h"

/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: The pointer to the string of 0 and 1
 *
 * Return: Teh converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec;

	if (!b)
	{
		return (0);
	}

	for (x = 0; b[x]; x++)
	{
		if (b[x] > '1' || b[x] < '0')
		{
			return (0);
		}
		dec = 2 * dec + (b[x] - '0');
	}
	return (dec);
}
