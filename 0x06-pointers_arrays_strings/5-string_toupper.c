#include "main.h"

/**
 * string_toupper - Changes lowercase letters of string to uppercase
 * @s: The string
 *
 * Return: The string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
