#include "main.h"

/**
 * print_diagonal - Draw diagonal line
 * @n: Number of times to draw
 *
 * Return: zero(0)
 */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (s = 0; s < i; ++s)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
