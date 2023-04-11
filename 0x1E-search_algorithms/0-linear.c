#include "search_algos.h"

/**
 * linear_search - Do linear search on list
 * @array: pointer to first element in array of ints
 * @size: number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, -1 if not in array or if
 * array is null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	if (array == NULL)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		printf("Value checked array[%ld] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
	}
	return (-1);
}
