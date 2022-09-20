#include "main.h"

/**
 *print_rev - Prints string in reverse
 *@s: String to be printed in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, l, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (l = (count - 1); l >= 0; l--)
	{
		_putchar(s[l]);
	}
	{
		_putchar('\n');
	}
}
