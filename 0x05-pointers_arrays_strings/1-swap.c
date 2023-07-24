#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *@a: One of the numbers to be checked
 *@b: one of the numbers to be checked
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
