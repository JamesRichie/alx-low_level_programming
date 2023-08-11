#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum values stored
 * @max: Maximum values stored
 * Return: Newly created array
 */
int *array_range(int min, int max)
{
	int *s;
	int x;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));

	if (s == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		s[x] = min++;
	}
	return (s);
}

