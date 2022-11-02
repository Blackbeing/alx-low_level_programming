#include "main.h"

/**
 * _strlen - Get length of string
 * @str: Pointer to string
 *
 * Return: Length of string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * create_file -  creates a file.
 * @filename: Filename
 * @text_content: Content to add to new file
 *
 * Return: 1 (Success), -1 (faiulre)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, b = 0;
	/* char *buf = malloc(sizeof(char) * (_strlen(text_content))); */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	b = write(fd, text_content, _strlen(text_content));
	if (b == -1)
		return (-1);
	close(fd);

	return (1);
}
