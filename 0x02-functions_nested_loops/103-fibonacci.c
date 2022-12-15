#include <stdio.h>

/**
 * main - find the sum of even first 4000000 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	unsigned long int  a, b , c, temp_1, temp_2, sum;
	int i;
	a = 0;
	b = 1;

	for (i = 1; i <= 400; i++)
	{
		c = a + b;
		temp_1 = b;
		temp_2 = c;
		a = temp_1;
		b = temp_2;
		
		if (c % 2 == 0)
		{
			sum += c;
		}


	}
	printf("%lu\n", sum);
	return (0);
}
