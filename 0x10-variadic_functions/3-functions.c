#include "variadic_functions.h"


/**
 * print_char - Print char
 * @arg: va_list object
 *
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Print int
 * @arg: va_list object
 *
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Print float
 * @arg: va_list object
 *
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - Print str
 * @arg: va_list object
 *
 */

void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
