#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print string in reverse using recursion
 * @s: String argument
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);

}
