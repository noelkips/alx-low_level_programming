#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 * @argc: integer number for the command-line arguments passed
 * @argv: array containing command-line arguments passed
 * during execution as strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int prod = 1;

	if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	else
		printf("Error\n");
	return (0);
}
