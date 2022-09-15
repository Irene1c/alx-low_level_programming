#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 *
 * Return : Numbers 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	{
		_putchar('\n');
	}
}

