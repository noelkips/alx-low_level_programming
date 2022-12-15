#include <stdio.h>

/**
 * main - find the sum of even first 4000000 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	unsigned long a, b , c, temp_1, temp_2, i;
	a = 0;
	b = 1;

	for (i = 2; i <= 98 ; i++)
	{
		c = a + b;
		temp_1 = b;
		temp_2 = c;
		a = temp_1;
		b = temp_2;
		
		printf("%lu", a);
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
