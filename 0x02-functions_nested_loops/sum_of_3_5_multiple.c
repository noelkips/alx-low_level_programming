#include <stdio.h>

/**
 * main - returns sum of multiples of 3 and 5 of a given range
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
