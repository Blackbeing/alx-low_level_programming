#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'z';
	char first = 'a';

	while (c >= first)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
