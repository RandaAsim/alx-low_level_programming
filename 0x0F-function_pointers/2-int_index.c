#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function index
 * @array: char
 * @size: num
 * @cmp: pointer
 * Return: num
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array && size && cmp)
	{
		for (r = 0; r < size && size > 0; r++)
		{
			if (((*cmp)(array[r])) != 0)
				return (r);
		}
	}
	return (-1);
}
