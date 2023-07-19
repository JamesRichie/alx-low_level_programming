#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets x10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
		x++;
	}
}	
