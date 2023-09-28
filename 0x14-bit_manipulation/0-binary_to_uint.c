#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string
 * Return: Converted number || 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x, len = 0;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}
	len -= 1;
	x = 0;

	while (b[x])
	{
		if ((b[x] != '0') && (b[x] != '1'))
		{
			return (total);
		}
		if (b[x] == '1')
		{
			total += (1 * (1 << len));
		}
		x++;
		len--;
	}
	return (total);
}
