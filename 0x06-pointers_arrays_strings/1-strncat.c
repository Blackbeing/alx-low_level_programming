#include "main.h"

/**
 *  _strncat - Concatenate two string
 *  @dest: str argument
 *  @src: str argument
 *  @n: int argument
 *
 *  Return: pointer to dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{

	int count, count2 = 0;

	for (count = 0; dest[count] != '\0'; count++)
		dest[count] = dest[count];

	for (count2 = 0; count2 < n; count2++)
	{
		if (src[count2] == '\0')
			break;
		dest[count++] = src[count2];
	}

	dest[count++] = '\0';

	return (dest);
}
