#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description - Find and print largest prime factor
 *
 * Return: Zero(0)
 */
int main(void)
{
	int d;
	long num = 612852475143;

	for (d = (int) sqrt(num); d > 2; d++)
	{
		if (num % d == 0)
		{
			printf("%d\n", d);
			break;
		}
	}
	return (0);
}
