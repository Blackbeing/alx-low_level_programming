#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_range - create an array of integers
 *@min: int argument
 *@max: int argument
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int count = 0;
	int dummy_min = min;
	int i, j = 0;

	if (min > max)
		return (NULL);

	for (count = 0; dummy_min <= max; count ++, dummy_min++)
		;

	ptr = malloc(count * sizeof(int));


	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
	{
		ptr[j] = i;
	}


	return (ptr);

}
