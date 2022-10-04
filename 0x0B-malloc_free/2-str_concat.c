#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: string argument
 * @s2: string argument
 *
 * Return: Poniter to s1
 */

char *str_concat(char *s1, char *s2)
{
	int count = 0;
	int count2 = 0;
	int i, j;
	char *s;

	if (s1 != NULL)
	{
		for (count = 0; s1[count]; count++)
			;
		count++;
	}
	else if (s1 == NULL)
		s1 = "";

	if (s2 != NULL)
	{
		for (count2 = 0; s1[count2]; count2++)
			;
		count2++;
	}
	else if (s2 == NULL)
		s2 = "";

	s = (char *)malloc((count + count2) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];

	for (j = 0; s2[j]; j++)
		s[i++] = s2[j];

	return (s);
}
