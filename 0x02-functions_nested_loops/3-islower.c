#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * Description: A C program that print
 * @c: input
 *
 * Return: 1 if c is lowercase - 0 somthind else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
