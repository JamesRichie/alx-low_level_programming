#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2, sum = z;

	while (y + z < 4000000)
	{
		y += z;
		if (y % 2 == 0)
		sum += z;
		z = y - z;
		x++;
	}
	printf("%ld\n", sum);
	return (0);
}
