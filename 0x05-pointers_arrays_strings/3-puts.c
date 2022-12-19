#include "main.h"
#include <string.h>

/**
 * _puts - prints a string on stdout
 * @str: the string to print
 * Return: none
 */

void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0 ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
