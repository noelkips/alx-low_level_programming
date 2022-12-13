#include "main.h"

/**
 * print_sign - check whether a number is signed or not
 *
 *@n: input number
 *
 * Return: 1 if signed (positve) else 0
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
