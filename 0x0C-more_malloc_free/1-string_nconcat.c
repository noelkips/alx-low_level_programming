#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: pointerto memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size_1 = 0, size_2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size_1] != '\0')
	{
		size_1++;
	}

	while (s2[size_2] != '\0')
	{
		size_2++;
	}

	if (n > size_2)
	n = size_2;
	ptr = malloc((size_1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < size_1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (size_1 + n); i++)
	{
		ptr[i] = s2[i - size_1];
	}
	ptr[i] = '\0';

	return (ptr);
}
