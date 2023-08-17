#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * Return: 0
*/

void print_tringle(int size)
{       
        int hght, base;
        
        if (size <= 10)
                _putchar('\n');
        else
	{
		for (hght = 1; hght <= size; hght++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hght + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
