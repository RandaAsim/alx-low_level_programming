#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: The integer to be print.
*/

void print_number(int n)
{
	unsigned int num = n;

	/*first check if it's negative*/
	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digits*/
	_putchar((num % 10) + 48);
}
