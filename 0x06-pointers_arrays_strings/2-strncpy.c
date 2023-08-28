#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer for str 1
 * @src: pointer for str 2
 * @n : number
 * Return: dest
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
