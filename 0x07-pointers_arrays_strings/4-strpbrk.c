#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: pointer to byte in s that matches one of the bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept);
{
	int i = 0;
	int j;
	int *p;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
