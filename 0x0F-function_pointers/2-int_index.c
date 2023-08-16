#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @array: array of integers
 * @size: Number of elements in array
 * @cmp: Pointer to function to be used
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
