#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size in bytes
 * Return: pointer to the memory location or
 * null if allocation fails
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b * sizeof(*ptr));

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
