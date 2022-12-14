#include <stdio.h>

/**
 * main - find the sum of even first 4000000 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int a, b , c, temp_1, temp_2, i, sum;
	a = 1;
	b = 2;

	for (i = 1; i <= 4000000 ; i++)
	{
		c = a + b;
		temp_1 = b;
		temp_2 = c;
		a = temp_1;
		b = temp_2;
		
		if (a % 2 == 0)
		{
			sum += a;
		}


	}
	printf("%d\n", sum);
	return (0);
}
