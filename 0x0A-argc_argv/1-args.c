#include <stdio.h>
#include "main.h"
/**
 * main- Entry point
 * @argc: integer number for the command-line arguments passed
 * @argv: array containing command-line arguments passed
 * during execution as strings
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);

}
