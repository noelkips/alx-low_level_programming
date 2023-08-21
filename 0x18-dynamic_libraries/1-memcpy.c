#include "main.h"

/**
 * _memcpy- copy memory area
 * @src: source string
 * @dest: destination string
 * @n: size of butter
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
