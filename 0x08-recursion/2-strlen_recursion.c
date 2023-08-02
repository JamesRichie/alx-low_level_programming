#include "main.h"
/**
 * _strlen_recursion - Prints the lenght of a strinf
 * @s: Pointer to the string
 * Return: Int
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
