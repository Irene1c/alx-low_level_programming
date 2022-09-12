#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Size of string in C
 *
 * Return: Always zero(0)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	printf("%d\n", sizeof(str) - 1);

	return (0);
}
