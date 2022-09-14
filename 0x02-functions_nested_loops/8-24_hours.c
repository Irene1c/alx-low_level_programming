#include "main.h"

/**
 * jack_bauer - Print every minute of the day from 00:00 to 23:59
 *
 * Return zero(0)
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h <= 23; h++)

	for (m = 0; m <= 59; m++)
	{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar('\n');
	}
}
