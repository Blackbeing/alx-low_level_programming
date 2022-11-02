#include "main.h"
/**
 * read_textfile - Read text file
 * @filename: filename str argument
 * @letters: Number of char to read
 *
 * Return: Number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read = 0, bytes_wrote = 0;
	char *buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		return (0);
	}

	bytes_wrote = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_wrote == -1 || bytes_wrote != bytes_read)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (bytes_read);
}
