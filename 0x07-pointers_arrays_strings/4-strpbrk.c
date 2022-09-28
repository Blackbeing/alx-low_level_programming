#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string argument
 * @accept: string argument
 *
 * Return: pointer to s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int count;
	int count2;
	char *ptr;

	count = 0;

	while (s[count] != '\0')
	{
		count2 = 0;

		while (accept[count2] != '\0')
		{
			if (accept[count2] == s[count])
			{
				ptr = &s[count];
				return (ptr);
			}
			count2++;
		}
		count++;
	}

	return (0);
}
