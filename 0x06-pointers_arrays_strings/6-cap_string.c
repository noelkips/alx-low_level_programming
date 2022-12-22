#include "main.h"

/**
 * cap_string - capitalize string
 * @str: string
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	char sep[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int i = 0;

	while (sep[i] != '\0')
	{
		if (s == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
* cap_string - This function capitalizes all words of a string.
* @s: sring to be processed.
*
* Return: pointer to the modified string.
*/
char *cap_string(char *s)
{
	int sep, i;

	sep = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (sep == 1 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			sep = 0;
		}
		sep = is_sep(s[i]);
		i++;
}
	return (s);
}

