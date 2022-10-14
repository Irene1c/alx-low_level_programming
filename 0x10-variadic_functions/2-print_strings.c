#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string printed between the strings
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int a = 1;
	unsigned int i;
	char *j;

	if (separator == NULL)
		a = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i + 1 < n && a != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
