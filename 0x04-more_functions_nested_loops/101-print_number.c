#include "main.h"

/**
 * print_number - Print number
 * @n: int argument
 *
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (n / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');

}
