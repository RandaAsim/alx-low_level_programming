#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * Descripstion: fill memory
 * @n: number of byet
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
