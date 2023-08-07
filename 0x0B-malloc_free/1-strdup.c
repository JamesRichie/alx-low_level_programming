#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a new string which is a 
 * duplicate of the string str
 * @str: String to be duplicated
 * Return: 0
 */

char *_strdup(char *str)
{
	char *copy;
	int x;
	int size = 0;

	if (!str)
	{
		return (NULL);
	}
	while (str[x] != '\0')
		x++;

	copy = malloc(sizeof(char) * (x + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size]; size++)
	{
		copy[size] = str [size];
	}
	return (copy);	
}
