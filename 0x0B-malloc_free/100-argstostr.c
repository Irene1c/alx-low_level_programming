#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: AGRV
 * Return: arguments or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, c = 0, a = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c = c + 1;
		}
	}
	c += ac;
	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[a] = av[i][j];
			a++;
		}
		if (str[a] == '\0')
		{
			str[a++] = '\n';
		}
	}
	return (str);
}
