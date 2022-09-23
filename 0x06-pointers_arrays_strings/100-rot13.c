#include "main.h"
#include <stdio.h>

/**
 * rot13 - ROT-13 cypher
 * @c: pointer to string
 *
 * Return: pointer to c
 */

char *rot13(char *c)

{
	char trans1[] =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char trans2[] =  "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int count, count2 = 0;

	for (count = 0; c[count] != '\0'; count++)
	{
		for (count2 = 0; trans1[count2] != '\0'; count2++)
		{
			if (c[count] == trans1[count2])
			{
				c[count] = trans2[count2];
				break;
			}
		}
	}
	return (c);
}
