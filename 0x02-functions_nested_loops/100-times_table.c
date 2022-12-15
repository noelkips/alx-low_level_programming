#include "main.h"

/**
 * print_times_table - print the n-times table
 *@n: dimension of table
 * Return: n-times table
 */
void print_times_table(int n)
{
	int  a, b, prod;

	if ((n >= 0) && (n <= 15))
	{
		for (a = 0; a <= n ; a++)
		{
			_putchar('0');
			for (b = 1; b <= n ; b++)
			{
				_putchar(',');
				_putchar(' ');

				prod = a * b;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar(prod / 100 + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar(prod / 10 + '0');
				}
					_putchar(prod % 10 + '0');
			}
			_putchar('\n');

		}
	}
}


