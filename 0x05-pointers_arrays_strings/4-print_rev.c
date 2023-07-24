#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the string in reverse.
 * @s: The string to be printed.
 * Return: String
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	while (c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}

