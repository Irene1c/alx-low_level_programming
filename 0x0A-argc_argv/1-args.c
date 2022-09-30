#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments passed into it
 * @argc: Argument count
 * @argv: Array pointing to the arguments
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a;

	(void) argv;
	for (a = 0; a < argc; a++)
	{

	}
	printf("%d\n", a - 1);
	return (0);
}
