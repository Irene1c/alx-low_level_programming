#include "main.h"

/**
 * _isdigit - Check whether input is a digit
 * @c: Character to be checked
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
