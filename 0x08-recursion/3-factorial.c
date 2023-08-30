#include "main.h"

/**
 * factorial - function find factorial
 * @n: number
 * Return: number
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
