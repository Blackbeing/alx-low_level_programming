#include "main.h"

/**
 * reverse_array - Reverse array
 * @a: pointer to array
 * @n: int argument
 *
 */

void reverse_array(int *a, int n)
{
	int count;
	int temp_a;

	for (count = 0; count < (n / 2); count++)
	{
		temp_a = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp_a;

	}
}
