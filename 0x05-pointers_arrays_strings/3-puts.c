#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: Te string to be printed
 * Return: String.
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		putchar(str[x]);
		x++;
	}
	putchar('\n');
}
