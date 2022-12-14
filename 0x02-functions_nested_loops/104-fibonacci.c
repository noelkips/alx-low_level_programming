#include <stdio.h>

/**
 * main - find the sum of even first 4000000 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int a, b , c, temp_1, temp_2, i;
	a = 1;
	b = 2;

	printf("%d", a);
	printf(",");
	printf(" ");
	for (i = 2; i <= 98 ; i++)
	{
		c = a + b;
		temp_1 = b;
		temp_2 = c;
		a = temp_1;
		b = temp_2;
		
		printf("%d", a);
		printf(",");
		printf(" ");
	}
	printf("\n");
	return (0);
}
