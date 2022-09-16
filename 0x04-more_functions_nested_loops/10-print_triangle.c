#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of triangle
 *
 * Return : zero(0)
 */
void print_triangle(int size)
{
	int r, s, n;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 1; s <= (size - r); s++)
			{
				_putchar(' ');
			}
			for (n = 1; n <= r; n++)
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
