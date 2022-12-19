#include "main.h"

/**
 * swap_int - swaps the values  of two integers
 * @a: first input pointer to integer
 * @b: second input integer
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
