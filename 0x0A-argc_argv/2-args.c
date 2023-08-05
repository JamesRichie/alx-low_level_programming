#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the arguments it receives
 * @argc: Number of arguments
 * @argv: Strings in array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
