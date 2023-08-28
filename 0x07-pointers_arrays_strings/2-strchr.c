nclude "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s
 *	or Null if character not found
 */

char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
		{
			return (s + r);
		}
	}
	return ('\0');
}
