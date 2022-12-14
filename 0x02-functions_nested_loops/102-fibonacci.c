#include <stdio.h>

/**
 * main - returns the first 50 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int a, b , c, temp_1, temp_2, i;
	a = 1;
	b = 2;

	for (i = 1; i <= 50 ; i++)
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
	return (0);
}
