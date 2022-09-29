#include "main.h"

/**
 * is_prime_number - Check if input is a prime number
 * @n: The number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
/**
 * _prime - Check if prime number
 * @n: The number
 * @i: Possible prime
 *
 * Return: 1 0r 0
 */
int _prime(int i, int n)
{

	if ((n <= 1) || (n != i && n % i == 0))
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	return (_prime(i + 1, n));
}
