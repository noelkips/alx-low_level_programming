#include "main.h"
#include "string.h"

/**
 * _strcat - concatinates two strings
 * @dest: - the destination which will contain both strings
 * @src: - the sring to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = strlen(dest);

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
