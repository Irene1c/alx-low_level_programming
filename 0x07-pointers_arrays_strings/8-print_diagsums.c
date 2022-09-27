#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - Prints sum of the two diagonals of integer square matrix
 *@a: Pointer to the array matrix
 *@size: The size
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int b = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[(size + 1) * i];
			}
			if (i + j == size - 1)
			{
				b = b + a[(size - 1) * (i + 1)];
			}
		}
	}
	printf("%d, %d\n", sum, b);
}
