#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalize string
 * @c: string argument
 *
 * Return: pointer to c
 */

char *cap_string(char *c)
{
	int count = 0;
	int count2 = 0;
	char seperators[] = " \t\n,;.!?\"(){}";
	int is_word = 1;
	int c_w;

	for (count = 0; c[count] != '\0'; count++)
	{
		for (count2 = 0; seperators[count2] != '\0'; count2++)
		{

			if (c[count] == seperators[count2] || count == 0)
			{
				is_word = 1;
				break;
			}
		}

		if (is_word)
		{
			c_w = c[count];
			if ((c_w >= 65 && c_w <= 90) || (c_w >= 47 && c_w <= 57))
			{
				c[count] = c[count];
				is_word = 0;
			}
			if (c[count] >= 97 && c[count] <= 122)
			{
				c[count] -= 32;
				is_word = 0;

			}
		}
	}
	return (c);
}
