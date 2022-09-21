#include "main.h"

/**
 * _strcpy - copies string pointed to including terminating null
 * @dest: Buffer to copy the string
 * @src: Contains the string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
