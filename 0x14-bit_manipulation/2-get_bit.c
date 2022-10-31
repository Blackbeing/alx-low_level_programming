#include "main.h"

/**
 * get_bit - Get bit at index
 * @n: int argument
 * @index: index to get bit value
 *
 * Return: Value of bit (1 or 0)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 * CHAR_BIT (from limits.h) specifies size in bits of the
	 * smallest addressable unit of storage (a "byte")
	 */

	if (sizeof(unsigned long int) * CHAR_BIT < index)
		return (-1);

	/**
	 * Shift 1 by index value (index = 10 , shift by 10)
	 * Example
	 * index = 10
	 * 1 as bin ->  0000 0000 0000 0001
	 * ------------------------------------
	 * 1 << 10  ->  0000 0100 0000 0000
	 *				    &
	 * n = 1024 ->  0000 0100 0000 0000
	 * ------------------------------------
	 *          ->  0000 0100 0000 0000
	 *
	 * = 1024
	 */

	if ((n & (1 << index)) != 0)
		return (1);

	return (0);
}
