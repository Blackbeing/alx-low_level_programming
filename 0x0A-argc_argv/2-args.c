#include <stdio.h>

/**
 * main - Print commandline arguments
 * @argc: num of commandline arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
