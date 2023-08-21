#include "main.h"

/**
 * swap_int - swaps the value of tow integer 
 *		using to input
 *
 * @a: input parameter 1
 * @b: input parameter 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
