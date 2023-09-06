#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * word_check - function
 * @str: string
 * Return: num
 */
int word_check(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}

	return (count);
}
/**
 * **strtow - splits string into words
 * @str: string
 * Return: pointer
 */
char **strtow(char *str)
{
	char **s, *tmp;
	int i, k = 0, l = 0, words, c = 0, start, end;

	while (*(str + l))
		l++;

	words = word_check(str);
	if (words == 0)
		return (NULL);

	s = (char **) malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				s[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	s[k] = NULL;
	return (s);
}
