#include "main.h"

/**
 * print_number -print numbers from 0-9
 * except 2 and 4
 * 
 * Return: none
 */

void more_numbers(void)
{
	int i, j; 

	for (j = 0; j <10 ; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i %10 + '0');
		}
		_putchar('\n');
	}
}

