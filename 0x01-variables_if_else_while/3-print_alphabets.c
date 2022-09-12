#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print alphabets in lower case and uppercase using putchar'
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

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	{
		putchar('\n');
	}

	return (0);
}
