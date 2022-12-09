#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a, b, c, d;

for ( a = 0 ; a < 10 ; a++)
{	

	for (b = 0 ; b <= 10 ; b++)
	{
	
		for (c = 0 ; c < 10 ; c++)
		{
			for ( d = 0 ; d < 10 ; d++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(' ');
				putchar('0' + c);
				putchar('0' + d);
				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(32);
				}
				d++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}
