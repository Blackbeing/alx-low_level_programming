#include <stdio.h>

/**
 * main - Print hexadecimal digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c = 0;
	char a = 'a';

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');

	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);

}

