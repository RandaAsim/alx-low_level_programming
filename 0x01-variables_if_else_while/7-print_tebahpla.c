#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0
*/

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
