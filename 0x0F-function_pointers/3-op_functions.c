#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - addition
 * @a: first input
 * @b: second input
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first input
 * @b: second input
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first input
 * @b: second input
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first input
 * @b: second input
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: first input
 * @b: second input
 * Return: remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
