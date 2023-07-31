#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: To put the const
 * @b: Const
 * @n: number of bytes to use
 * Return: pointers of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
