
#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Find value of number raised to the power of a number
 * @x: int argument
 * @y: int argument
 *
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
