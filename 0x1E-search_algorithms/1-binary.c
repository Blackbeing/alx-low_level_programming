#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * print_array - Print elements of an int array
 * @array: Pointer to first element of an array
 * @size: Size of array
 */
void print_array(int *array, size_t size)
{
	size_t index = 0;

	for (index = 0; index < size; index++)
	{
		printf("%d", array[index]);
		if (index < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Use binary search on a sorted array
 * @array: pointer to first element of sorted array
 * @size: size of array
 * @value: value to search for
 *
 * Return: First index where value is located, -1 if not in array or if
 * array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array + left, right - left + 1);

		if (value == array[middle])
			return (middle);

		else if (value < array[middle])
			right = middle - 1;

		else if (value > array[middle])
			left = middle + 1;
	}
	return (-1);

}
