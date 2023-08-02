#include "main.h"
/**
 * factorial - returns the factorial of an given number
 * @n: Number to be input
 * Return: Int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
