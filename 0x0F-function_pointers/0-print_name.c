#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Pointer to the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
