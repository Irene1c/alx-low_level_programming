#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: String to be scanned
 * @accept: String containing characters to be matched
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
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
