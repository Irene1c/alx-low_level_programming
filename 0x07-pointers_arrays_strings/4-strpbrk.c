#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be scanned
 * @accept: String containing bytes to be matched
 *
 * Return: Pointer to the bytes in s that match one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: The character
 *
 * Return: Pointer to first occurence of character c or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s >= '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
		return ('\0');
}
