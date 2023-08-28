#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @src: pointer string
 * @dest: pointer destinatiom
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0 ; l < n && src[l] != '\0' ; ++)
	{
		dest[l] = src[l];
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
