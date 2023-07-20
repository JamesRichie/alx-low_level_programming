#include "main.h"
/**
 * _isdigit - Checks for a digit 0 to 9.
 * @c: The number to be checked
 * Return: 1 if it id a digit and 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
