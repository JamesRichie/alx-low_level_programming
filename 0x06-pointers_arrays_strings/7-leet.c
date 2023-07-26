#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @n: Input value
 *
 * Return: Encoded string
 */
char *leet(char *n)
{
	int c, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[c] == s1[j])
			{
				n[c] = s2[j];
			}
		}
	}
	return (n);
}
