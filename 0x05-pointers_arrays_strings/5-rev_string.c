#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 * @s: the string to print
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1 ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}
}
