#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute function on each array element
 * @array: array argument
 * @size: int argument
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
