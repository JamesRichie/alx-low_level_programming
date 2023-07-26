#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: One of the inputs
 * @src: One of the inputs
 * @n: One of the input values
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (src[y] < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
