#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print single digits of base ten using putchar'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	{
		putchar('\n');
	}

	return (0);
}
