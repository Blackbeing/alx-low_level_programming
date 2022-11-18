#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert string to int
 * @s: str argument
 *
 * Return: int
 */

int _atoi(char *s)
{
	int m = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			m *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * m);
}
