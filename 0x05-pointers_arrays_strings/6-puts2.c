#include "main.h"
#include <stdio.h>

/**
 * puts2 -  prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: The string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int x, y;

	y = 0;

	while (str[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x += 2)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
