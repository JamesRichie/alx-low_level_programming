#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Input value
 * @n: Input value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
