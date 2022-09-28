#include "main.h"

/**
 * _memcpy -- Copy memory area
 * @dest: array
 * @src: array
 * @n: int argument
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
