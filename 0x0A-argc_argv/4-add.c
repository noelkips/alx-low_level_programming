#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main- Entry point
 * @argc: integer number for the command-line arguments passed
 * @argv: array containing command-line arguments passed
 * during execution as strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, n, sum;
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			n = strlen(p);
			for (j = 0; j < n; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
	return (0);
}
