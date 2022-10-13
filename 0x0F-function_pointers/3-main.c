#include "3-calc.h"

/**
 * main - Run program
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]))
	{
		result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result);

	return (0);
}
