#include "main.h"
#include "string.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 0 in s1==s2, greater than 1 if s1 >s2 , less than
 * 1 if 21 <s2
 */

int _strcmp(char *s1, char *s2)
{
	int result;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
