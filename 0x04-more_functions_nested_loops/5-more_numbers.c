#include "main.h"
/**
 * more_numbers - Prints numbers 0 to 9 10 times.
 *
 * Return: Always (Success).
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
			_putchar('\n');
	}
}


