#include "main.h"

/**
 * print_alphabet_x10 -- print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;

	for (count = 0; count < 10; count++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
