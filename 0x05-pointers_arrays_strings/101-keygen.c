#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int m = 0, n = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (n < 2772)
	{
		m = rand() % 128;
		n += m;
		printf("%c", m);
	}
	printf("%c\n", (2772 - n));
	return (0);
}
