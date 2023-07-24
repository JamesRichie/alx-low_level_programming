#include <stdio.h>
/**
 * _strlen - Returns the lrnght of a string.
 * @str: The dyring whos lenght will be obtained
 * Return: The leght of string.
 */
size_t _strlen(const char *str)
{
	size_t lenght = 0;

	while (*str++)
	{
		lenght++;
	}
	return (lenght);
}
