#include "main.h"

/**
 * set_string - set value of a pointer to a char
 * @s: pointer to a pointer
 * @to: Pointer to the char
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
