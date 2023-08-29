#include "main.h"

/**
 * main - function to print
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n = 0;
	unsigned long m = 1;
	unsigned long add;
	float total;

	while (1)
	{
		add = n + m;
		if (add > 4000000)
			break;
		if ((add % 2) == 0)
			total =total + add;
		n = m;
		m = add;
	}
	printf("%.0f\n", total);
	return (0);
}
