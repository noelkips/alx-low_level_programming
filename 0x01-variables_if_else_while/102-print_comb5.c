#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a, b, c, d;
	int i, j;
	
	for ( i = 0 ; i < 10 ; i++)
	{
		a = i /10;
		b = i %10;
		
		for (j = 0 ; j <= 10 ; j++)
		{
			c = j/10;
			d = j%10;
			
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
