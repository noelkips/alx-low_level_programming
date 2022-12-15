#include "main.h"

/**
 * print_square -print square on the terminal
 *@size: the size of the square
 * Return: square of size size in the terminal
 */

void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size; i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
