#include "3-calc.h"

/**
 * get_op_func - Get function from string
 * @s: str argument
 *
 * Return: function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 5;

	while (i--)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
	}

	return (NULL);
}
