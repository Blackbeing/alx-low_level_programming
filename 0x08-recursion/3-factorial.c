#include "main.h"
#include <stdio.h>

/**
 * factorial - Get factorial of a number
 * @n: int argument
 *
 * Return: Factorial of number
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
