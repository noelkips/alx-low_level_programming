#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode
 *
 * Return: a pointer to sear
 */
char *rot13(char *str)
{
	int i;

	for ( i = 0; str[i] != '\0'; i++)
	{
		for (i = 0; ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')); i++)
		{
			str[i] += 13;
		}
		if ((str[i] >=  'n' && str[i] <= 'z') || (str[i] >=  'N' && str[i] <= 'Z'))
			str[i] -= 13;
	}
	return (str);
}
