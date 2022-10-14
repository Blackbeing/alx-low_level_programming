#include "variadic_functions.h"

/**
 * print_strings - Print string with separator
 * @separator: pointer to string
 * @n: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);
		printf("%s", value != NULL ? value : "(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
