#include "main.h"

/**
 * clear_bit - Clear bit at index
 * @n: int argument
 * @index: int argument
 *
 * Return: -1 (failure) or 1 (success)
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * CHAR_BIT < index)
		return (-1);

	/**
	 * Invert (1 << index) using NOT (~) operator
	 * index = 1
	 *
	 * 1 as bin ->  0000 0000 0000 0001
	 * ~1 (not) ->  1111 1111 1111 1110
	 * ------------------------------------
	 * ~(1 << 1)  ->  1111 1111 1111 1101
	 *				       &
	 * n = 98     ->  0000 0000 0110 0010
	 * ------------------------------------
	 *             ->  0000 0000 1100 0000     = 96
	 */

	*n = (*n & (~(1 << index)));
	return (1);
}
