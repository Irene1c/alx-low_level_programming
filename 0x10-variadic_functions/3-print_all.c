#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all
 * @format: list of type of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, a = 0;
	char *str;
	char *sep = ", ";

	va_start(args, format);
	while (format && format[i])
	{
		i++;
	}
	while (format && format[a])
	{
		if (a == i - 1)
		{
			sep = "";
		}
		switch (format[a])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s%s", str, sep);
				break;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
