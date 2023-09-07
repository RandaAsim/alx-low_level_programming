#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: minimum range
 * @max: maximum range
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *tr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tr = malloc(sizeof(int) * size);

	if (tr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		tr[i] = min++;

	return (tr);
}
