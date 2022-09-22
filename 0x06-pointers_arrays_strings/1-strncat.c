#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination
 * @src: Source of string to be appended
 * @n: Number of bytes to use from source code
 *
 * Return: A pointer to resulting string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
