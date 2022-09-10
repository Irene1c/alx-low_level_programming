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
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	{
		putchar('\n');
	}

	return (0);
}
