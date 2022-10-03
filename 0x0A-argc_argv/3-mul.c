#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print product of two integers
 * @argc: num of commandline arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc - 1 < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
