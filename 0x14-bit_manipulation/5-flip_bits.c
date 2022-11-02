#include "main.h"

/**
 * flip_bits - number of bits needed to flip to get
 * from one number to the other
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (set_bits_count(n ^ m));
}
/**
 * set_bits_count - count of set bits
 * @a: the number
 * Return: count
 */
int set_bits_count(unsigned long int a)
{
	int count = 0;

	while (a > 0)
	{
		a &= (a - 1);
		count++;
	}
	return (count);
}
