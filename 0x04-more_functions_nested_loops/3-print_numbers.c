#include "main.h"

/**
 * print_number -print numbers from 0-9
 * 
 * Return: 1 if its a digit or 0 is a letter
 */

void print_numbers(void)
{
	int i; 

	for (i = 0; i <= 9; i++)
	{
		_putchar(i +'0');
	}
	_putchar('\n');
}

