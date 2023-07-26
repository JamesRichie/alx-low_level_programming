#include "main.h"
/**
 * rot13 - Encodes a string using the ROT13
 * @n: Input value
 *
 * Return: Success
 */
char *rot13(char *n)
{
	int x, y;

	char s[] = "ABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (n[x] == s[y])
			{
				n[x] = rot[y];

				break;
			}
		}
	}
	return (n);
}
