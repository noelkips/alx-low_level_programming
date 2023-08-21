#include "main.h"

/**
 * _strstr- locates a substring.
 * @haystack: source string
 * @needle: string to search
 *Return: Returns a pointer to the beginning of the located \
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;


	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
