#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create array of chars, and initialize with specific char
 * @size: int argument
 * @c: char argument
 *
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	m = (char *)malloc(size * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	m[i + 1] = '\0';

	return (m);
}
