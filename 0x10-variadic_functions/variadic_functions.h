#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct custom_list - Struct type to print
 * @s_type: str
 * @func: function pointer
 *
 *
 */

typedef struct custom_list
{
	char *s_type;
	void (*func)(va_list arg);
} c_l;

#endif
