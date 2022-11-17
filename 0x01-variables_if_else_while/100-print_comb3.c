#include <stdio.h>

/**
 * main - Print all possible combination of 2 digit numbers
 *
 * Return: (0) Success;
 */

int main(void)
{
	int m = 0;
	int n = 0;

	for (m = 48; m < 57; m++)
	{
		for (n  = 49; n < 58; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (n + m != 113)
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
