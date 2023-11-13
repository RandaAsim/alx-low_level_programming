#include "main.h"

/**
 * clear_bit - Function name
 * @n: int
 * @index : int
 * Return: Always 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31 || n == NULL)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
