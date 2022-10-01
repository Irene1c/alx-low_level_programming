#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds numbers
 * @argc: Argument count
 * @argv: Array pointing to the arguments
 *
 * Return: 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
