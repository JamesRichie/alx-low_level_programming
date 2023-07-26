#include "main.h"
/**
 * string_toupper - Converts lowercase letters of string to uppercase.
 * @n: Pointer of array
 *
 * Return: 0
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')

			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
