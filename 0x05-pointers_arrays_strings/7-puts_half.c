#include "main.h"

/**
 * puts_half - Print half of string
 * @str: String argument
 *
 */

void puts_half(char *str)
{
	int count = 0;
	int i = 0;
	char c = *str;
	int num_of_char;

	while (c != '\0')
	{
		c = *(str + count);
		count++;
	}

	num_of_char = count % 2 == 0 ?  count / 2 : (count - 1) / 2;
	/* num_of_char = count / 2; */

	for (i = num_of_char; str[i] != '\0' ; i++)
	{
		_putchar(*(str +  i));
	}
	_putchar('\n');

}
