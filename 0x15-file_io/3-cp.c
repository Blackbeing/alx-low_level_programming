#include "main.h"

/**
 * main - Copy contents of one file to another file
 * @argc: num of cmd arguments
 * @argv: cmd arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_count;
	char *from_buf = malloc(sizeof(char) * 1024), *r_f, *w_f;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r_f = argv[1], w_f = argv[2], from_fd = open(r_f, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", r_f);
		exit(98);
	}
	to_fd = open(w_f, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", w_f);
		exit(99);
	}
	else
	{
		read_count = read(from_fd, from_buf, 1024);
		while (read_count)
		{
			write(to_fd, from_buf, read_count);
			read_count = read(from_fd, from_buf, 1024);
		}
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", r_f);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", w_f);
		exit(100);
	}
	return (0);
}
