#include "main.h"
#include <stdio.h>

/**
 *  *_strcpy - Copy string to pointer
 *
 * @dest: destination pointer
 * @src: Source string
 *  Return: Pointer to string
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
