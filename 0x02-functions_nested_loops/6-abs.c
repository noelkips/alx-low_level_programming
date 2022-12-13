#include "main.h"

/**
 * _abs -returns absolute value of an integer
 *
 *@n: number input
 *
 * Return: n, absolute vale for an integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
