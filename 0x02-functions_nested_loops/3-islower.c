#include "main.h"

/**
 * _islower - checks whether character c is lower or not
 *
 * @c: character input
 *
 * Return: 1 is c is lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
