#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- print sum of two diagonals of a square matrix
 * @a: array
 * @size: size of array
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i;
	int n = 0;
	unsigned int sum_1, sum_2 = 0;

	n = (size * size) - 1;

	for (i = 0; i <= n; i = i + (size + 1))
	{
		sum_1 = sum_1 + a[i];
	}
	for (i = (size - 1); i < n; i = i + (size - 1))
	{
		sum_2 = sum_2 + a[i];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
