#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Nothing
 */
int main(void)
{
	int long n1 = 1;
	int long n2 = 2;
	int i;

	int long n = n1 + n2;

	printf("%ld, %ld, ", n1, n2);
	for (i = 3; i < 50; i++)
	{
		printf("%ld, ", n);
		n1 = n2;
		n2 = n;
		n = n1 + n2;
	}
	while (i = 50)
	{
		printf("%ld\n", n);
		break;
	}
	return (0);
}
