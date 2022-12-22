#include "main.h"

/**
 * cap_string - capitalize string
 * @str: string
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i, n;

	char seperators[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0 ; seperators[i] != 0; i++)
	{
		if (str[i] == seperators[i])
			n = 1;
	}
	for (i = 0; str[i] != 0; i++)
	{
		if (n == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = 'A' + (str[i] - 'a');
			n = 0;
		}
	}

	return (str);
}
