#include <stdio.h>
/**
 * main - Print name of program
 * @argc: num of commandline arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
