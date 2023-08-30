#include "main.h"

/**
 * _strlen_recursion - print the length of string
 * @s: pointer to string
 * Return:n
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s  > '\0')
	{
		n = n + _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
