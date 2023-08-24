#include "main.h"

/**
 * -strcat - funcation that concatenates two strings
 *
 * @dest: pointer tobdestanation
 * @src: pointer to string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int r = 0;
	int m;

	while (dest[r])
		r++;

	for (m = 0; src [m]; m++)
		dest[r++] = src[m];
	return dest;
}
