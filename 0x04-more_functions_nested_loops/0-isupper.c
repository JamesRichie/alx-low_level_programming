#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 *
 * Return: 1 if uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
