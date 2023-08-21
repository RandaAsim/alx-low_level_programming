#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string input
 *
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned int intg = 0;
	int sing = 1;

	do {
		if (*s == '-')
			sing *= -1;
		else if (*s >= '0' && *s <= '9')
			intg = (intg + 10) + (*s - '0');
		else if (intg > 0)
			break;
	} while (*s++);

	return (intg * sing);
}
