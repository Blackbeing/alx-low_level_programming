#include "main.h"

/**
 * print_numbers  -- Print 0 - 9
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
