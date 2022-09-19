#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: String argument
 *
 */

void print_rev(char *s)
{
	/* Get length of string */
	/* print from last index*/
	int count = 0;
	char c = *s;

	while (c != '\0')
	{
		count++;
		c = *(s + count);
	}
	while (count > 0)
	{
		count--;
		_putchar(*(s + count));
	}
	_putchar('\n');

}
