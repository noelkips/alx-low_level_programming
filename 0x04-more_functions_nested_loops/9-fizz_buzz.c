#include <stdio.h>

/**
 * main - print the first 100 numbers
 * print fizz in multiples of 3, print buzz in multiples
 * print  fizzbuzz where a number is mutiple of both three and five
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100 ; n++)
	{
		if (n  % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	return (0);
}
