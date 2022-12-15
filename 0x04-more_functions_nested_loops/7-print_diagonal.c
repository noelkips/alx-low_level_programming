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

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i < n; i++)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
