#include "main.h"

/**
 * print_triangle - print traingle on terminal
 * @size: size ot the triangle
 * Return: 0 (Success)
 */

void print_triangle(int size)
{
	int i, m, p;
	int j = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0 ; i < size ; i++)
	{
		m = 0;
		while (m < (j - i))
		{
			_putchar(32);
			m++;
		}
		p = size - m;

		while (p > 0)
		{
			_putchar('#');
			p--;
		}
		_putchar('\n');
	}
}
