#include "main.h"

/**
 * _abs -- compute absolute value
 * @n: argument
 * Return: int
 *
 */


int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
