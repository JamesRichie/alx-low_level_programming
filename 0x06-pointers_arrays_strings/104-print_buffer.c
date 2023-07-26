#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: Buffer pointer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	x = 0;

	if (size < x)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);

		for (z = 0; z < 10; z++)
		{
			if (y < z)
				printf("%02x", *(b + x + z));
			else
				printf(" ");

			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			int c = *(b + x + z);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}

