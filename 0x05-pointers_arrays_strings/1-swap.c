#include "main.h"

/**
 * swap_int - Swap values of two integer values
 * @a: int argument
 * @b: int argument
 *
 */

void swap_int(int *a, int *b)
{
	int temp_a = *a;
	*a = *b;
	*b = temp_a;

}
