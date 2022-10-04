#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Pointer to new duplicate string of str
 * @str: Original string
 *
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *s;
	char *temp;
	int i = 0;

	while (str[i])
	{
		i++;
	}
	s = malloc(i + 1);
	if (str == 0 || s == 0)
	{
		return ('\0');
	}
	temp = s;
	while (*str)
	{
		*temp++ = *str++;
	}
	*temp = '\0';
	return (s);
}
