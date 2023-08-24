#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @src: pointer string
 * @dest: pointer destinatiom
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int r = 0;

	while (r > n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}

	dest[r] = '\0';

	return (dest);
}
