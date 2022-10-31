#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: pointer to int
 * @index: int argument
 *
 * Return: integer with set bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (sizeof(unsigned long int) * CHAR_BIT < index)
		return (-1);
	/**
	 * using 1 with OR (^) bitwise operator returns 1
	 *
	 * EXAMPLE
	 * 1 as bin ->  0000 0000 0000 0001
	 * ------------------------------------
	 * 1 << 10  ->  0000 0100 0000 0000
	 *				    ^
	 * n = 0    ->  0000 0000 0000 0000
	 * ------------------------------------
	 *          ->  0000 0100 0000 0000
	 */

	*n = (*n ^ (1 << index));
	return (1);
}
