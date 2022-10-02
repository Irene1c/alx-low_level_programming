#include "main.h"

/**
 * _strlen - Length of string
 * @s: The string
 *
 * Return: zero
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}
/**
 *_palindrome - check if string is a palindrome
 *@s: The string
 *@i: start of string
 *@l: end of string
 *
 * Return: zero or 1
 */
int _palindrome(char *s, int i, int l)
{
	if (s[i] != s[l])
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (_palindrome(s, i + 1, l - 1));
}
/**
 * is_palindrome - check if string is palindrome
 * @s: The string
 *
 * Return: zero or 1
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0)
		return (1);
	return (_palindrome(s, 0, len - 1));
}
