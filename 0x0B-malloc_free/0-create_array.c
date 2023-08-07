#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @c: Character to be created
 * @size: Size of the array
 * Return: NULL if fsil
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(str) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
