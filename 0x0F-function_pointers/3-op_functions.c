#include "3-calc.h"

/**
 * op_add- add a and b
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subract b from a
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiply a and b
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divide a and b
 * @a: integer
 * @b: integer
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- finds remainder of  a divided by b
 * @a: integer
 * @b: integer
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
