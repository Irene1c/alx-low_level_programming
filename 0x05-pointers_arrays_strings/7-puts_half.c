#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string
 *
 * Return: Second half of the string
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = _strlen(str);
	if ((len % 2) == 0)
	{
		for (i = len / 2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	{
		_putchar('\n');
	}
}
/**
 * _strlen - returns length of string
 * @s: The string
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
