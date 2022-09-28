#include "main.h"

/**
 * _strchr - Locate char in string
 * @s: string argument
 * @c: char argument
 *
 * Return: Pointer to s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
