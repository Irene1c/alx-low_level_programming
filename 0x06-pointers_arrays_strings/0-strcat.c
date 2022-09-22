#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source of string to be appended
 *
 * Return: A pointer to resulting string in dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
