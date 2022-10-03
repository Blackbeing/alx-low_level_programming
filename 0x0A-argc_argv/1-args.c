#include <stdio.h>
/**
 * main - Print number of arguments
 * @argc: num of commandline arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
