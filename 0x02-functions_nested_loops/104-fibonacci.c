#include <stdio.h>

/**
 * main - find the sum of even first 4000000 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	unsigned long a, b, c, i;

	a = 0;
	b = 1;

	for (i = 2; i <= 98 ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i == 98)
			printf(" ");
		else
		{
			printf(",");
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
