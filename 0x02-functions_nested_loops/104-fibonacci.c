#include <stdio.h>

/**
 * main - Print first 98 fib numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int m = 2;

	float n = 1;
	float o = n + 1;
	float p = n + o;

	printf("%.0f, ", n);
	printf("%.0f, ", o);

	while (m < 98)
	{
		m++;
		printf("%.0f", p);
		n = o;
		o = p;
		p = n + o;
		if (m < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
