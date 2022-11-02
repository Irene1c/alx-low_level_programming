#include "main.h"

/**
 * clear_bit - set value of bit to 0 at index
 * @n: pointer to number
 * @index: the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = ~(1 << index) & *n;
	{
		return (1);
	}
	return (-1);
}
