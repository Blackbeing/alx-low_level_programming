#include "main.h"

/**
 * more_numbers -- print 0 - 14  ten times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');

		}
		_putchar('\n');

	}
}
