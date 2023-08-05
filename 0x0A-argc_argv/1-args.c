#include "main.h"
#include <stdio.h>

/**
 * main - Prints out the number of arguments
 * passed in
 * @argc: Number of arguments
 * @argv: Strings in array
 * Return: Success
 */
int main(int argc, char **argv)
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
