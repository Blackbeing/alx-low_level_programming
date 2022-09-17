#include <stdio.h>

/**
 * print_square - print square
 *
 * @size: int
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		putchar('\n');

	for (y = 0; y < size; y++)
	{
		x = 0;
		for (x = 0; x < size; x++)
		{
			putchar('#');
		}
		putchar('\n');

	}
}
