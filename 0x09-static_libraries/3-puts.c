#include "main.h"
#include <string.h>

/**
 * _puts2 - prints every character of string
 * @str: the string to print
 * Return: none
 */

void _puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0 ; i < len ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
