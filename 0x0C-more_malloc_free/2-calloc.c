#include "main.h"
#include <stdlib.h>

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
	char c = 0;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		*(ptr + i) = c;

	return (ptr);
}
