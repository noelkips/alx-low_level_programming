#include <stdio.h>

/**
 * main - returns the first 50 Fibonacci numbers
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	unsigned long a, b , c, temp_1, temp_2;
	int i;
	a = 0;
	b = 1;

	for (i = 1; i <= 50 ; i++)
	{
		c = a + b;	
		printf("%lu", c);
		temp_1 = b;
		temp_2 = c;
		a = temp_1;
		b = temp_2;
		if (i == 50)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
