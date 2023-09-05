#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function length of str
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: frist string
 * @s2: second string
 * Return: NULL if str is empty
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int size1;
	int size2;
	char *r;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	r = malloc((size1 + size2) * sizeof(char) + 1);

	if (r == 0)
	{
		return (0);
	}

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			r[i] = s1[i];
		}
		else
		{
			r[i] = s2[i - size1];
		}
	}
	r[i] = '\0';
	return (r);
}
