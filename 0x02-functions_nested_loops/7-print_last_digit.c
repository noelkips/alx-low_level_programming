#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int d)
{
	if (d > 0)
	{
		d = d % 10;
		_putchar(d + '0');
	}
	else
	{
		d = d % 10 * -1;
		_putchar(d + '0');
	}
	return (d);
}
