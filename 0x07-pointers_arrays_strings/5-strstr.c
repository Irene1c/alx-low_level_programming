#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string
 * @needle: The substring
 *
 * Return: Pointer to beginning of substring or Null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hs = haystack;
		char *nd = needle;

		while (*hs == *nd && *nd != '\0')
		{
			hs++;
			nd++;
		}
		if (*nd == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
