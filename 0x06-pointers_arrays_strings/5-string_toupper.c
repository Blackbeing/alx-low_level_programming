#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert lowercase to uppercase
 * @c: string argument
 *
 * Return: Pointer to c
 */

char *string_toupper(char *c)
{
	int count = 0;

	for (count = 0; c[count] != '\0'; count++)
	{
		if (c[count] >= 97 && c[count] <= 122)
			c[count] -= 32;
	}
	return (c);
}
