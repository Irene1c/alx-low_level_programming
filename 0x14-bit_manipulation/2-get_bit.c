#include "main.h"

/**
 * get_bit - value of bit at index
 * @n: the number
 * @index: the index
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = ((n >> index) & 1);
	{
		return (b);
	}
	if (index > 63)
	{
		return (-1);
	}
}
