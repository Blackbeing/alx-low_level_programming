#include "main.h"

/**
 * puts2 - Print every other character
 * @str: String argument
 *
 */

void puts2(char *str)
{
	int count = 0;
	char c = *str;
	int i = 0;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	while (i < count)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
