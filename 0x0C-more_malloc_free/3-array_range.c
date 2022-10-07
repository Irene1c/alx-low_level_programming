#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: Lowest input
 * @max: Highest input
 * Return: pointer to newly allocated memory or NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int num = 0;

	if (min > max)
	{
		return (NULL);
	}
	while (num < (max - min))
	{
		num++;
	}
	a = malloc(sizeof(int) * (num + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= num; i++)
	{
		a[i] = min++;
	}
	return (a);
}
