#include "main.h"
#include <string.h>

/**
 * puts_half - prints seconf half character of string
 * @str: the string to print
 * Return: none
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 == 1)
	{
		for (i = (len / 2) + 1 ; i < len ; i = i + 1)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len / 2 ; i < len ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
