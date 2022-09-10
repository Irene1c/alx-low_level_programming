#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print alphabets in lower case using putchar'
 *
 * Return:Always zero(0)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}

	{
		putchar('\n');
	}

	return (0);
}
