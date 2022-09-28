#include "main.h"

/**
 * _strspn - String span in initial segment
 * @s: string
 * @accept: string
 *
 * Return: num of bytes
 */


unsigned int _strspn(char *s, char *accept)
{
	int count;
	int count2;
	int c;

	count = 0;
	c = 0;

	while (s[count] != '\0')
	{
		count2 = 0;
		while (accept[count2] != '\0')
		{
			if (s[count] == accept[count2])
			{
				c++;
				break;
			}
			count2++;
		}
		if (accept[count2] == '\0')
			break;
		count++;
	}
	return (c);
}
