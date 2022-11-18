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
	unsigned int count = 0;
	unsigned int t1, t2;

	while (n > 0 || m > 0)
	{
		t1 = (n & 1);
		t2 = (m & 1);
		if (t1 != t2)
			count += 1;
		n >>= 1;
		m >>= 1;
	}

	return (count);

}
