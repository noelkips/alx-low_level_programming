#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_1;
	int num_2;

	for(num_1 = 0; num_1 < 10; num_1 ++)
	{
		for(num_2 = 0; num_2 < 10; num_2 ++)
		{
			if ((num_1 && num_2)| (num_2 && num_1))
					if ((num_1+num_2 ) < (num_2+num_1))
					{
						putchar(num_1);
						putchar(num_2);
						putchar(',');
						putchar(' ');
					}else
					{
						putchar(num_2);
						putchar(num_1);
						putchar(',');
						putchar(' ');
					}
		}
	}
}

