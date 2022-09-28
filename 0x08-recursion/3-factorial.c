#include "main.h"

/**
 * factorial - Factorial of a given number
 * @n: The number
 *
 * Return: Factorial or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
