#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print smallest combination of two digit numbers'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	int i = '0';
	int a = '1';

	for (i = '0'; i <= '9'; i++)

	for (a = '1'; a <= '9'; a++)

	if (i != a && i < a)
	{
		putchar(i);
		putchar(a);
		if (i < '8' && a <= '9')
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
