#include "main.h"
#include "string.h"

/**
 *_strncpy - copies a string
 * @dest: - the destination which will contain both strings
 * @src: - the sring to copy from
 * @n: number of bytes to write to destination
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
