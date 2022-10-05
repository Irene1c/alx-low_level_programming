#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2, str3;
	int i = 0;
	char *b;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	str1 = strlen(s1);
	str2 = strlen(s2);
	str3 = str1 + str2 + 1;
	b = malloc(str3);
	if  (b == 0)
	{
		return ('\0');
	}
	while (*s1 != '\0')
	{
		b[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		b[i] = *s2;
		s2++;
		i++;
	}
	b[i] = '\0';
	return (b);
}
