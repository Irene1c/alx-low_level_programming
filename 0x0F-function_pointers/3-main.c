#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int (*ptr)(int, int);

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && ((argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(op);
	printf("%d\n", ptr(a, b));
	return (0);
}
