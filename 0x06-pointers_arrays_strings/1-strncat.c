#include "main.h"
#include "string.h"

/**
 *_strncat - concatinates two strings
 * @dest: - the destination which will contain both strings
 * @src: - the sring to append
 * @n: number of bytes to use in concatination from  source string
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
