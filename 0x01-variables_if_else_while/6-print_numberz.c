#include <stdio.h>

/**
 * main -- Print single digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
