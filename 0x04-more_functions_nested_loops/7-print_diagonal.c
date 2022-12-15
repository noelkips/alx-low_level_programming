#include "main.h"

/**
 * print_diagonal - print diagonal of a given line
 * @n: input integer (lenght of diagonal)
 * Return: diagonal of a line
 */

void print_diagonal(int n)
{
	int i;
	int j = 0;

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
