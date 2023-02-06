#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int temp;
	int count = 0;
	unsigned long int current;

	for (temp = n; (temp >>= 1) > 0; count++)
		;
	for (; count >= 0; count--)
	{
		current = n >> count;

		if (current & 1)
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}

