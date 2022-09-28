#include "main.h"

/**
 * _pow_recursion - Raise a number to a power
 * @x: The number
 * @y: The exponent
 *
 * Return: Value of x raised to power of y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (_pow_recursion(x, y - 1) * x);
}
