#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Executes a fuction given as a parameter
 * on each ellent of an array
 * @array: Array if integers
 * @size: Size of array
 * @action: Pointer to the function needed
 * return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
