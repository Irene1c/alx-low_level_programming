#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print combinations of two two-digit numbers'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	int i;
	int a;

	for (i = 0; i <= 98; i++)
	for (a = 1; a <= 99; a++)
	{
		if (i != a && i < a)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			if (!(i == 98 && a == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
