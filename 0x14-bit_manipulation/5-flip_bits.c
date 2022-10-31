#include "main.h"

/**
 * flip_bits - Get number of bits to flip to get from one number to another
 * @n: int argument
 * @m: int argument
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
