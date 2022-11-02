#include "main.h"

/**
 * set_bit - set value of bit to 1 at index
 * @n: pointer to number
 * @index: the index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (1 << index) | *n;
	{
		return (1);
	}
	return (-1);
}
