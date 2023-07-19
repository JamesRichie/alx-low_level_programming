#include <stdio.h>

/**
 * main - Prints multiples of 3 and 5 below 1024
 * Return: Always (Success)
 */

int main(void)
{
	int c, j = 0;

	while (c < 1024)
	{
		if ((c % 3 == 0) || (c % 5 == 0))
		{
			j += c;
		}
		c++;
	}
	printf("%d\n", j);
	return (0);
}
