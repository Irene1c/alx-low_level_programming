#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: size of s2
 *
 * Return: concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int str1, str2, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str1 = _strlen(s1);
	str2 = _strlen(s2);

	if (n < str2)
		str2 = n;

	str = malloc(str1 + str2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);

}
/**
 * _strlen - length of string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

