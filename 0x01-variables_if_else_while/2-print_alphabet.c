#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print lower case alphabets using putchar'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	{
		putchar('\n');
	}

	return (0);
}
