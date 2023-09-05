#include "main.h"

/**
 * alloc_grid - pointer to 2 dimensial arry
 * @width: width of the array
 * @height: the high of array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int r = 0;
	int m = 0;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		while (r < height)
		{
			array[r] = (int *)malloc(sizeof(int) * width);
			if (array[r] != NULL)
			{

				while (m < width)
				{
					array[r][m] = 0;
					m++;
				}
				r++;
			}
			else
			{
				while (r >= 0)
				{
					free(array[r]);
					r--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
