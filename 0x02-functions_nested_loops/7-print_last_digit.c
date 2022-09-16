#include "main.h"

/**
 * print_last_digit -- print last digit of a number
 * @n: argument
 * Return: int (last digit)
 *
 */

int print_last_digit(int n)
{
	int rem = n % 10;

	if (rem < 0)
	{
		rem *= -1;
		_putchar(rem + '0');
	}
	else
		_putchar(rem + '0');
	return (rem);

}
