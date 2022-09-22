#include "main.h"

/**
 * _strncpy - Copy string
 * @dest: pointer to string
 * @src: pointer to string
 * @n: int argument
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}

	/* ‘strncpy’ copies all of FROM, followed by enough null */
	/* bytes to add up to SIZE bytes in all. */
	for (count = count; n > count; count++)
		dest[count] = '\0';

	return (dest);
}
