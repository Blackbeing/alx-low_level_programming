#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: string argument
 * @src: string argument
 *
 * Return: pointer to dest
 *
 */


char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;

	for (count = 0; dest[count] != '\0'; count++)
	{
		dest[count] = dest[count];
	}

	for (count2 = 0; src[count2] != '\0'; count2++)
	{
		dest[count++] = src[count2];
	}


	return (dest);
}
