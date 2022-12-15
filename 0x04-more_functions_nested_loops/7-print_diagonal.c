#include "main.h"

/**
 * print_line -print a straight line in the terminal
 *@n: input integer, descripes the lenght of line to draw
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int i;
	int j = 0 ;

	for (i = 1 ; i <= n; i++)
	{
		_putchar(' ');
	}
	while (j <= i)
	{
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
