#include <stdio.h>

/**
 * _sqrt - find the square root
 *
 * @x: input
 *
 * Return: square of the root x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds lagest factor (num)
 *
 * @num: number to find
 */

void largest_prime_factor(long int num)
{
	int prmnm, largest;

	/*first divide with the smallest prime number (two)*/
	while (num % 2 == 0)
		num = num / prmnm;

	/*num must to be odd so we proceed to the next prime number (plus two)*/
	for (prmnm = 3; prmnm <= _sqrt(num); prmnm += 2)
	{
		while (num % prmnm == 0)
		{
			num = num / prmnm;
			largest = prmnm;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
