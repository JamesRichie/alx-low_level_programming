#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */

void times_table(void)
{
	int c, j, x, y, z;
	
	for (c = 0; c <= 9; c++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = c * j;
			if (x > 9)
			{
				y = x % 10;
				z = (x - y) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
