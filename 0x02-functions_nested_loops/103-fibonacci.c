#include <stdio.h>

/**
 * main - Print sum of even  fib numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int m = 0, n = 1, z = 0;
	int sum = 0;

	while (z < 4000000)
	{
		z = m + n;
		m = n;
		n = z;
		if (z % 2 == 0)
			sum += z;
	}
	printf("%d\n", sum);
	return (0);
}
