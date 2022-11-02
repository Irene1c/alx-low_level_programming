#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;
	int base = 1;
	int len = 0;
	int j;

	len = _strlen(b);
	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			value += base;
		}
		base = base * 2;
	}
	return (value);
}
/**
 * _strlen - length of string
 * @s: the string
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

