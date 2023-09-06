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
 * *argstostr - concatinates all arguments
 * @ac: argc
 * @av: arguments
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int l = 0, i, j, m = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		l += _strlen(av[i]);
	}
	l += (ac + 1);
	s = malloc(l * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[m++] = av[i][j];
		}
		s[m++] = '\n';
	}
	return (s);
}
