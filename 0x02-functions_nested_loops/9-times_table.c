#include "main.h"

/**
 * times_table - prints times table to 9
 *
 * Return: zero(0)
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j != 0)
			{
				if (p <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
			else
			{
				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}

}
