#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Prints the number of arguments
 * @argv: Prints the array of strings
 * Return: Success
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
