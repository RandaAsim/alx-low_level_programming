#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
		}
	}
}
