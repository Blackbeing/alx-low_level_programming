#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Search for integer
 * @array: array argument
 * @size: int argument
 * @cmp: Pointer to function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
