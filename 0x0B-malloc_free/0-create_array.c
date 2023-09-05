#include "main.h"

/**
 * create_array - function create array of char and initialize it
 * @c: char
 * @size: size of arr
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *r = malloc(size);

	if (size == 0 || r == 0)
	{
		return (0);
	}

	while (size--)
		r[size] = c;

	return (r);
}
