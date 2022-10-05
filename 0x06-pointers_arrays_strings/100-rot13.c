#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The string
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	int a;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (s[a] == str[i])
			{
				str[i] = rot13[a];
				break;
			}
		}
	}
	return (str);
}
