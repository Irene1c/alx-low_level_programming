#include "main.h"

/**
 * _strpbrk - Searches string for any set of bytes
 * @s: String to be scanned
 * @accept: String containing characters to be matched
 *
 * Return: Pointer to the bytes in s or Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; accept[j] != '\0'; j++)
	if (s[i] == accept[j])
	{
		return (s + i);
	}
	return ('\0');
}
