#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: substring
 * @accept: bytes
 * Return: number of bytes in the s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
