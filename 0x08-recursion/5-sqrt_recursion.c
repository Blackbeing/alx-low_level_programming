#include "main.h"

/**
 * get_sqrt - Recursive function to get sqroot
 * @n: int arg
 * @root: int arg
 *
 * Return: Integer
 */

int get_sqrt(int n, int root)
{
	int sq = (root * root);

	if (sq == n)
		return (root);
	if (root == (n / 2))
		return (-1);
	return (get_sqrt(n, root + 1));

}
/**
 * _sqrt_recursion - Get square root of number
 * @n: int arg
 *
 * Return: Integer
 */


int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (get_sqrt(n, root));

}
