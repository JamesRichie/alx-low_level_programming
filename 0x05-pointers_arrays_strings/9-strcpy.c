#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copys a string
 * @dest: Destination value
 * @src: Source value
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
