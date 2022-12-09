#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for(n=0; n < 10; n++)
	{
		putchar(n);
	}
	for (c='a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	printf("\n");
	return (0);
}
