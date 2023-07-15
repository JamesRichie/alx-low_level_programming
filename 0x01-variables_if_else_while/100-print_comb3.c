#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints all possible combinations of two digits'
 * Return: Always 0
 */
int main(void)
{
	int n = '0';
	int m = '0';

	while (n < '9')
	{
		while (m < '9')
		{
			if (!(n > m) || n == m)
			{
				putchar(n);
				putchar(m);
				if (n == '8' && m == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		m = '0';
		n++;
	}
	return (0);


}
