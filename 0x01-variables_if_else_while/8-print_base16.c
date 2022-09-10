#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print numbers of base 16 in lowercase using putchar'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	int i = '0';
	char ch;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	{
		putchar('\n');
	}

	return (0);
}
