#include "main.h"

/**
 * _strlen - Get string length
 * @s: string argument
 *
 * Return: int (string length count)
 */

int _strlen(char *s)
{
	int count = 0;
	char eof = '\0';
	char c = *s; /* First char */

	while (c != eof)
	{
		count++;
		c = *(s + count);

	}
	return (count);
}
