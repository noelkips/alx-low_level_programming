#include "main.h"

/**
 * string_toupper - converts string to upper
 * @str: string to convert
 *
 * Return: string in upper
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = 'A' + (*(str + i) - 'a');
		}
	}
	return (str);
}
