#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print lower case alphabets in reverse using putchar'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	{
		putchar('\n');
	}

	return (0);
}
