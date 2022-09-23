#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int a;
	int i;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a < 8; a++)
		{
			if (str[i] == leet[a] || str[i] - 32 == leet[a])
				str[i] = a + '0';
		}
	}
	return (str);
}
