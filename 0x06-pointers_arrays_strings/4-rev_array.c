#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp_1, temp_2;

	while (i < n)
	{
		temp_1 = a[i];
		temp_2 = a[n - 1];

		a[i] = temp_2;
		a[n - 1] = temp_1;
		i++;
		n--;
	}
}
