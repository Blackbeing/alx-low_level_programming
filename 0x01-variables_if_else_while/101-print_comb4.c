#include <stdio.h>

/**
 * main - Print all possible combination of 3 digit numbers
 *
 * Return: (0) Success;
 */
int main(void)
{
	int m, n, o, p;

	for (m = 0; m < 1000; m++)
	{
		n = m / 100;
		o = (m / 10) % 10;
		p = m % 10;

		if (n < o && o < p)
		{
			putchar(n + '0');
			putchar(o + '0');
			putchar(p + '0');

			if (m < 700)
			{
				putchar(44);
				putchar(32);

			}
		}

	}
	putchar('\n');
	return (0);
}
