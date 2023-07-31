#include "main.h"
/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest.
 *
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: value in bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
