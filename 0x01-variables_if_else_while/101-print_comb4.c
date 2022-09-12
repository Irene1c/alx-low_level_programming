#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print smallest combination of three digit numbers'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	int i = '0';
	int a = '1';
	int b = 'b';

	for (i = '0'; i <= '9'; i++)

	for (a = '1'; a <= '9'; a++)

	for (b = '2'; b <= '9'; b++)

	if (i != a && a != b && b != a && i < a && a < b)
	{
		putchar(i);
		putchar(a);
		putchar(b);
		if (i < '7' && a <= '8' && b <= '9')
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
