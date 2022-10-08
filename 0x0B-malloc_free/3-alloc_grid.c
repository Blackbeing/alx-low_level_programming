#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Dynamicall allocate 2d array initialized to 0
 * @width: int argument
 * @height: int argument
 *
 * Return: Pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr; /* pointer to pointer */
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* use int * as it points to an int pointer */
	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		/* use int and not int * as it points to int value */
		*(ptr + i) = (int *)malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
		{
			for (j = 0; j < i; j++) /* free every address allocated */
				free(*(ptr + j));
			free(ptr); /* free pointer to pointer of int */
			return (NULL);
		}
	}
	/* initialize all elements with 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			/* dereferencing pointer */
			*(*(ptr + i) + j) = 0;
		}
	}

	return (ptr);

}
