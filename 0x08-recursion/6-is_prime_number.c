#include "main.h"

/**
 * is_prime_number - test if number is a prime number
 * @n: int argument
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int prime_number(int d, int n);

	int d = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(d, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_number - recursion steps
 * @n: int argument
 * @d: int argument
 *
 * Return: 0 if not prime, 1 if prime
 */

int prime_number(int d, int n)
{
	if (d < n)
	{
		if (n % d == 0)
		{
			return (0);
		}
		else
		{
			return (prime_number(++d, n));
		}
	}
	else
	{
		return (1);
	}
}
