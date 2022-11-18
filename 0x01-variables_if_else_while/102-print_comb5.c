#include <stdio.h>

/**
 * main - Print all possible combinations of two two-digit numbers.
 *
 * Return: 0 Success
 */

int main(void)
{
	int m, n;

	for (m = 0; m < 100; m++)
	{
		for (n = 0; n < 100; n++)
		{
			if (m < n)
			{
				putchar(m / 10 + '0');
				putchar(m % 10 + '0');
				putchar(' ');
				putchar(n / 10 + '0');
				putchar(n % 10 + '0');
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
