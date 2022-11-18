#include "main.h"
#include <stdio.h>

/**
 * set_string - Set value of pointer to char
 * @s: double pointer
 * @to: pointer to string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
