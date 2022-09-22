#include "main.h"

/**
 * leet - Replace characters with corresponding numbers
 * @c: pointer to string
 *
 * Return: pointer to c
 * Description - Replace aA -> 4, eE -> 3, oO -> 0, tT -> 7, lL -> 1
 */

char *leet(char *c)
{
	int count = 0;
	int count2 = 0;
	char trans1[] = "aAeEoOtTlL";
	char trans2[] = "4433007711";

	for (count = 0; c[count] != '\0'; count++)
	{
		for (count2 = 0; trans1[count2] != '\0'; count2++)
		{
			if (c[count] == trans1[count2])
				c[count] = trans2[count2];
		}
	}
	return (c);
}
