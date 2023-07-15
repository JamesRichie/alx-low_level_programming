#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets in lower amd upper case'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int f = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (f <= 90)
	{
		putchar(f);
		f++;
	}
	putchar('\n');
	return (0);
}
