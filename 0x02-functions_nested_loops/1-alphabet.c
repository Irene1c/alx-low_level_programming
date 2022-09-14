#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: Zero(0)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
