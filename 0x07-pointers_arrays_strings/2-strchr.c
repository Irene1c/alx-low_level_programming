#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: The character
 *
 * Return: Pointer to first occurence of character c or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
