#include <stdio.h>

/**
 * main - returns the first 50 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	unsigned long a, b, c;
	int i;

	a = 0;
	b = 1;
	for (i = 1; i <= 50 ; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		if (i == 50)
		{
			printf("\n");
		}
		else
		{
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
