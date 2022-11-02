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
 * append_text_to_file -  Append text to a file.
 * @filename: Filename
 * @text_content: Content to append to new file
 *
 * Return: 1 (Success), -1 (faiulre)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, b = 0;
	/* char *buf = malloc(sizeof(char) * (_strlen(text_content))); */

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_RDWR |  O_APPEND, 0600);
		if (fd == -1)
			return (-1);

		b = write(fd, text_content, _strlen(text_content));
		if (b == -1)
			return (-1);
	}
	close(fd);

	return (1);

}
