#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: input
 * @n: input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int s;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		printf("%d", s);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
