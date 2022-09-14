#include "main.h"

/**
 * _abs - Compute absolute value of an integer
 * @i: Integer to be computed
 *
 * Return: zero(0)
 */
int _abs(int i)
{
	if (i < 0)
	{
		return ((-1) * i);
	}
	else
		return (i);
}
