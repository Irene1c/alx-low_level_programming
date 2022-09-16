#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of square
 *
 * Return : zero(0)
 */
void print_square(int size)
{
	int i, b;

	for (i = 0; i < size; ++i)
	{
		for (b = 0; b < size; ++b)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
