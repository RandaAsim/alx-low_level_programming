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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
