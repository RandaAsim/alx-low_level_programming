#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - random valid passwords for the program 101-crackme.
 *
 * Return: 0
 */

int main(void)
{
	int P;
	char A;

	srand(time(NULL));
	while (P <= 2645)
	{
		A = rand() % 128;
		P = P + A;
		putchar(A);
	}
	putchar(2772 - P);
	return (0);
}
