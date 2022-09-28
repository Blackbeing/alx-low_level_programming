#include "main.h"

/**
 * _memset - Fill memory with constant byte
 * @s: array pointer
 * @b: byte
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
