#include "main.h"

/**
 * _sqrt_recursion - find square
 * @n: integer
 * @val: sqrt root
 * Return: integer
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to find square root
 * @n: integer
 * @val: square root
 * Return: integer
 */

int square(int n, int val)
{

	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
		return (-1);
}
