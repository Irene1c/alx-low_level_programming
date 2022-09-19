#include "main.h"

/**
 * swap_int - Swaps two integer values
 * @a: First integer
 * @b: Second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
