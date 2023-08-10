#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using the malloc
 * @b: Number of bytes to be allocated
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
