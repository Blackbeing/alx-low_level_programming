#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print sum of left and right diagonals
 * @a: multidimension array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, diag_right_sum = 0, diag_left_sum = 0;

	/* Iterate forward to sum right diagonal */
	for (i = 0; i < size; i++)
	{
		diag_right_sum += a[i];
		/* move to next list pointer */
		a += size;
	}
	/* After iteration we'll be at end of last list */
	/* move to pointer (first element) of last list */
	a -= size;

	/* Iterate backwards to sum left diagonal */
	for (i = 0; i < size; i++)
	{
		diag_left_sum += a[i];
		a -= size;
	}
	printf("%d, %d\n", diag_right_sum, diag_left_sum);

}
