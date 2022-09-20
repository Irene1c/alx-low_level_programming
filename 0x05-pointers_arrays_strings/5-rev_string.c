#include "main.h"

/**
 * rev_string - reverses a string
 * @s: contains string to be reversed
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char temp;

	len = _strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
/**
 * _strlen - returns length if string
 * @s: the string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
