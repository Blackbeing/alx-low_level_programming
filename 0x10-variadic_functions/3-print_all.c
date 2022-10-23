#include "variadic_functions.h"
#include "3-functions.c"

/**
 * print_all - Print anything (char, int, float, string)
 * @format: str argument
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int list_c = 0;
	int format_counter = 0;
	char *seperator = "";

	c_l type_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};

	va_start(args, format);

	while (format && format[format_counter] != '\0')
	{
		list_c = 0;

		while (list_c < 4 && format[format_counter] != *(type_list[list_c].s_type))
			list_c++;

		if (list_c < 4)
		{
			printf("%s", seperator);
			type_list[list_c].func(args);
			seperator = ", ";
		}
		format_counter++;
	}

	va_end(args);

	printf("\n");
}
