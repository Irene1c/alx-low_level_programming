#include "main.h"

/**
 * _sqrt_recursion - Square root of a number
 * @n: The number
 *
 * Return: Squaroot or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(0, n));
}
/**
 * _sqrt - Find the square root of a number
 * @n: The number
 * @r: The square root
 *
 * Return: Square root or -1
 */
int _sqrt(int r, int n)
{
	if (r <= n / 2)
	{
		if (n == 1)
		{
			return (1);
		}
		if (r * r != n)
		{
			return (_sqrt(r + 1, n));
		}
		return (r);
	}
	return (-1);
}
