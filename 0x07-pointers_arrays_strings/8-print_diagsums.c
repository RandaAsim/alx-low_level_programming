#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: integer
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		s2 = s2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
