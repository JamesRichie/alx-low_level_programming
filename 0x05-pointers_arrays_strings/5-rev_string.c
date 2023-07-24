#include "main.h"
#include <stdio.h>

/**
 * rev_sring - Reverses a string.
 * @s: Pointer, pointing to the string
 * Return: 0
 */
void rev_string(char *s)
{
	int x, y;
	char temp;

	x = 0;
	y = 0;

	while (s[y++])
	x++;

	for (y = x -1; y >= y / 2; y--)
	{
		temp = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = temp;
	}
}
