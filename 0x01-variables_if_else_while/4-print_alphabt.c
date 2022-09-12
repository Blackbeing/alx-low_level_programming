#include <stdio.h>

/**
 * main -- print alphabet except q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
