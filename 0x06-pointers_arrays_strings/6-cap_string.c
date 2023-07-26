#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 * @n: Pointer of the array
 *
 * Return: 0
 */
char *cap_string(char *n)
{
	int x;

	x = 0;

	while (n[x] != '\0')
	{
		while (!(n[x] >= 'a' && n[x] <= 'z'))
			x++;

		if (n[x - 1] == ' ' ||
		n[x - 1] == '\t' ||
		n[x - 1] == '\n' ||
		n[x - 1] == ',' ||
		n[x - 1] == ';' ||
		n[x - 1] == '.' ||
		n[x - 1] == '!' ||
		n[x - 1] == '?' ||
		n[x - 1] == '"' ||
		n[x - 1] == '(' ||
		n[x - 1] == ')' ||
		n[x - 1] == '{' ||
		n[x - 1] == '}' ||
		x == 0)
			n[x] -= 32;
		x++;
	}
	return (n);
}


