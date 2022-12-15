#include "main.h"

/**
 * print_line -print a straight line in the terminal
 *@n: input integer, descripes the lenght of line to draw
 * Return: none
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (i > 0)
			_putchar('_');
	}
	_putchar('\n');
}
