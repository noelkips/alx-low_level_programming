#include <math.h>
#include <stdio.h>

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

	while (l % 2 == 0)
	{
		l = l / 2;
	}
	for (n = 3; n <= (int)sqrt(l); n++)
	{
		if (l % n == 0)
		{
			l = l / n;
		}
	}
	printf("%ld\n", l);
	return (0);
}
