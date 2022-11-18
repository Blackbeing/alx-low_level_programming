#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all the arguments of a program.
 * @ac: num of args
 * @av: arguments
 *
 * Return: pointer to char array
 */
char *argstostr(int ac, char **av)
{
	char *buffer;
	int count, i, j, ia;

	if (ac == 0)
	{
		return (NULL);
	}
	for (count = 0, i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	buffer = malloc(sizeof(char) * (count + 1));

	if (buffer == NULL)
	{
		free(buffer);
		return ('\0');
	}

	for (i = 0, j = 0, ia = 0; ia < count; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			buffer[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < count - 1)
			buffer[ia] = av[i][j];
	}
	buffer[ia] = '\0';

	return (buffer);
}
