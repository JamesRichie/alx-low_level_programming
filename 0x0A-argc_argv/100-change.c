#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Strings in an array
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int coin;
	int total = 0;
	int x = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (x = 1; x < (int)strlen(argv[1]); x++)
	{
		if (!isdigit(argv[1][x]))
		{
			printf("Error\n");
			return (1);
		}
	}
	coin = atoi(argv[1]);

	while (coin > 0)
	{
		x = 0;

		while (x < 5)
		{
			if (coins[x] <= coin)
			{
				coin -= coins[x];
				total++;
				break;
			}
			x++;
		}
	}
	printf("%d\n", total);
	return (0);
}
