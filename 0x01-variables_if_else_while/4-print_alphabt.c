#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'To print alphabets in lowercase excluding e and q using'
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
