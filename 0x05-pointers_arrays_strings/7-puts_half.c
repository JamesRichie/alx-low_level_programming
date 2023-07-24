#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 * Return: Success
 */
void puts_half(char *str)
{
	int x, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
		y = (x - 1) / 2;
		y += 1;
	}
	else
	{
		y = x / 2;
	}

	for (; y < x; y++)
	{
		putchar(str[y]);
	}
	putchar('\n');
}
