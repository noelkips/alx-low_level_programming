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
		for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
