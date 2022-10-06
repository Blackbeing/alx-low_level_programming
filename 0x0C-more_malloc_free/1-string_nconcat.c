#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat -- concatenate two strings.
 * @s1: string argument
 * @s2: string argument
 * @n: int argument
 *
 * Return: Pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, count2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	if (n > strlen(s2))
		ptr = malloc(strlen(s1) + strlen(s2) + 1);
	else
		ptr = malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (count = 0; s1[count]; count++)
		ptr[count] = s1[count];
	for (count2 = 0; s2[count2] && count2 < n; count2++)
		ptr[count++] = s2[count2];
	ptr[count++] = '\0';

	return (ptr);
}
