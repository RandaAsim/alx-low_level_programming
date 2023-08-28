#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of byte
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int R;

	for (R = 0; n > 0; R++)
		n--;
	{
		s[R] = b;
	}
	return (s);
}
