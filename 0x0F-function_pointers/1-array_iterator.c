#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - arry funcation
 * @array: char
 * @size: num
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long r;

	if (array && action && size)
	{
		for (r = 0; r < size; r++)
		{
			(*action)(array[r]);
		}
	}
}
