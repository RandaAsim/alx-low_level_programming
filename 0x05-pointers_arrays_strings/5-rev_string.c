#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string parameter input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by looping*/
	for (i = 0; i < l; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
