#include "main.h"

/**
 * _strdup - function returns pointer to new allocated space
 * @str: pointer string
 * Return: Null if pointer is null
 */

char *_strdup(char *str)
{
	int s;
	int size;
	char *r;

	s = 0;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
		;
	r = malloc(size * sizeof(*str) + 1);

	if (r == 0)
	{
		return (NULL);
	}
	else
	{
		for (s = 0; s < size; s++)
			r[s] = str[s];
	}
	return (r);
}
