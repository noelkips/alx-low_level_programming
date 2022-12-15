#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of
 * 612852475143
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	long l = 612852475143;

	for (n = (int) sqrt(num); n > 2 ; n++)
	{
		if (l % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}
	return (0);
}
