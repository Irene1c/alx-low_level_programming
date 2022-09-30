#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Argument count
 * @argv: Array pointing to the arguments
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
