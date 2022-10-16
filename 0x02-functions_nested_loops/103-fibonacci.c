#include <stdio.h>

/**
 * main - entry point
 * Return: nothing
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n = n1 + n2;
	int sum = 2;

	while (n < 4000000)
	{
		n1 = n2;
		n2 = n;
		n = n1 + n2;
		if (n % 2 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
