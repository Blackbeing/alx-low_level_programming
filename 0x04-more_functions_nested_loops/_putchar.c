#include "main.h"

/**
 * _putchar - Write character to STDOUT
 * @c: char argument
 * Return: num of bytes written, or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
