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
	int i, j, temp;

	for (i = 0 ; i < len ; i++)
	{
		for (j = len-1 ; j >= 0 ; j--)
		{
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
		}
	}
}
