#include "main.h"

/**
 * _puts - print string followed by newline
 * @str: string argument
 *
 */

void _puts(char *str)
{
	int count = 0;
	char c = *str;

	while (c != '\0')
	{
		_putchar(*(str + count));
		count++;
		c = *(str + count);

	}
	_putchar('\n');
}
