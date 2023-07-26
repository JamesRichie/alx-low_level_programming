#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: Character to be printed
 *
 * Return: Succss 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
