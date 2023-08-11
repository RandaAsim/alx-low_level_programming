#include <stdio.h>
/**
 * main - enter
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
