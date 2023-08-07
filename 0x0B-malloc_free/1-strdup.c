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

	while (str[size])
	{
		size++;
	}
	
	copy = malloc(size + 1);
	if (!copy)
	{
		return (NULL);
	}

	x = 0;
	while (x < size)
	{
		str[x] = copy[x];
	x++;
	}
	return (copy);
}
