#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate string
 * @str: string argument
 *
 * Return: Pointer to duplicated string
 */

char *_strdup(char *str)
{
	int i = 0;
	int count = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (count = 0; str[count]; count++)
		;
	count++;    /* for the \0 */

	s = malloc((count * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i + 1] = '\0';

	return (s);
}
