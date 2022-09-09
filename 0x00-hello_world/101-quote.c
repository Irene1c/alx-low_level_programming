#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Standard error in C
 *
 * Return: One (1)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, 59, STDOUT_FILENO, stderr);
	return (1);
}
