#include "main.h"
/**
 * _strchr - Locates a charater in a string
 * @s: Pointer to the string
 * @c: Pointer to the character
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
