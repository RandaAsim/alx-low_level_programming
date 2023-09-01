#include <stdio.h>

/**
 * main - print num
 * @argc: num
 * @argv: arry
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
