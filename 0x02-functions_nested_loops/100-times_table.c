#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print the n-times table
 *@n: dimension of table
 * Return: n-times table
 */
void print_times_table(int n)
{
	int  a, b, prod;

	if ((n > 15) || (n < 0))
	{
		printf(" ");
	}
	else
	{
		for (a = 0; a <= n ; a++)
		{
			for (b = 0; b <= n ; b++)
			{
				prod = a * b;
				printf("%d", prod);
				if (b == n)
				{
					printf(" ");
				}
				else
				{
					printf(",");
					printf(" ");
				}
			}
			printf("\n");

		}
	}
}


