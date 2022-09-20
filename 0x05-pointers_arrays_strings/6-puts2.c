#include "main.h"

/**
 * puts2 - Prints every other character in a string
 * @str: The string
 *
 * Return: Every other character of the string
 */
void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i + 2 <= len; i += 2)
	{
		_putchar(str[i]);
	}
	{
	_putchar('\n');
	}
}
/**
 * _strlen - Length of string
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
