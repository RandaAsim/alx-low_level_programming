#include "main.h"

/**
 * main - function print
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long m = 0;
	unsigned long n = 1;
	unsigned long sum;

	for (i = 0; i < 50; i++)
	{
		sum = m + n;
		printf("%lu", sum);
		m = n;
		n = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
