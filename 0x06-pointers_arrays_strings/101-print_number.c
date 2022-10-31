#include "main.h"

/**
 * print_number - Prints a integer
 * @n: Integer to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	if (i / 10)
	print_number(i / 10);
	{
		_putchar((i % 10) + '0');
	}
}
