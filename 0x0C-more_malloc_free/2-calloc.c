#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fill memory with a constant byte
 * @p: pointer to put the constant
 * @c: char argument
 * @n: int argument
 * Return: p
 */

char *_memset(char *p, char c, unsigned int n)
{
	char *ptr = p;

	while (n--)
		*p++ = c;

	return (ptr);
}

/**
 * _calloc -  allocate memory for an array, using malloc
 * @nmemb: int argument
 * @size: int argument
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
