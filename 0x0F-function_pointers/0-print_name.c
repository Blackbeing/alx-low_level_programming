#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print name
 * @name: str argument
 * @f: function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
