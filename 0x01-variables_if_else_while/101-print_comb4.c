#include <stdio.h>
/**
 * main - Entry point
 * Description:'print set of three digit numbers'
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x < '9'; x++)
	{
		for (y = '0'; y <= 9; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if ((y != x) != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == '7' && y == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
