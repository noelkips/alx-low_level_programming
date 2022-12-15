#include <stdio.h>

/**
 * main - find the sum of even first 4000000 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	unsigned long a, b, c, sum;
	int i;

	a = 0;
	b = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}


	}
	printf("%lu\n", sum);
	return (0);
}
