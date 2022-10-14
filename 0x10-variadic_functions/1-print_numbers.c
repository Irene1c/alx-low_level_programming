#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers
 * @n: number of integers passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int a = 1;
	unsigned int i, j;

	if (separator == NULL)
		a = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, unsigned int);
		printf("%d", j);
		if (i + 1 < n && a != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
