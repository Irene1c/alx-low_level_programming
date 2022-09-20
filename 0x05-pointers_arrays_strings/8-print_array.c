#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array of integers
 * @a: pointer to the array
 * @n: Number of elements
 *
 * Return: Zero
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
