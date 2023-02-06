#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: integer
 * @index: index is the index, starting from 0
 * Return: the value of the bit at a given index or
 * -1 if the error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index > 32)
		return (-1);
	return (b & 1);
}

