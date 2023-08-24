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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + strlen(dest)] = src[i];
	}

	dest[i + strlen(dest)] = '\0';

	return (dest);
}
