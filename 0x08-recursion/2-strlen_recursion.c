#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Count length of string using recursion
 * @s: String argument
 *
 * Return: String lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
