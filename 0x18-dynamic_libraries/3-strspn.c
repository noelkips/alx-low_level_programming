#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: string to find length
 * @accept: searching string
 * Return:  number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
	if (*(accept + j) == '\0')
		break;
	}
	return (i);
}

