#include "variadic_functions.h"

/**
 * sum_them_all - program to sum
 * @n: number
 * Return: s
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int s = 0;

	va_start(list, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		s += va_arg(list, int);
	}
	va_end(list);

	return (s);
}
