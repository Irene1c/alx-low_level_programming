#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all possible combinations of single digits'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	{
		putchar('\n');
	}

	return (0);
}
