#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String argument
 *
 */

void rev_string(char *s)
{
	int count = 0;
	int r = 0;
	int j = 0;
	char c = *s;
	char temp_c;

	while (c != '\0')
	{
		count++;
		c = *(s + count);
	}

	r = count / 2;  /* iterate half times the length of string */
			/* (2 char changed on '@' iteration) */

	count -= 1;

	while (r > 0)
	{
		temp_c = s[j];
		s[j] = s[count];
		s[count--] = temp_c;
		j++;
		r--;
	}

}
