#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of triangle
 *
 * Return : zero(0)
 */
void print_triangle(int size)
{
	int n, a;

	if (size > 0)
	{
		for (n = 1; n <= size; ++n)
		{
			for (a = 1; a <= n; ++a)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
