#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int m = 0;
	long n = 1, o = 2, p = 0;

	while (m < 50)
	{
		if (m == 0)
			printf("%ld", n);
		else if (m == 1)
			printf(", %ld", o);
		else
		{
			p = o;
			o = o + n;
			n = p;
			printf(", %ld", o);
		}
		m++;

	}
	printf("\n");
	return (0);
}
