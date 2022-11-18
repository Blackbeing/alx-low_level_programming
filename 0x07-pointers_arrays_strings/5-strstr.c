#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locate substring
 * @haystack: string to search in
 * @needle: string to search in haystack
 *
 * Return: Pointer to substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}
	return ('\0');
}
