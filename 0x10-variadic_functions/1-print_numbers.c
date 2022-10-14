#include "variadic_functions.h"

/**
 * print_numbers - Print argument numbers with separator
 * @separator: pointer to string
 * @n: int arg
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		value = va_arg(args, int);
		printf("%d", value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
