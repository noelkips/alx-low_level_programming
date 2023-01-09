#include "main.h"

/**
 * _isalpha - checks whether character c is lower or not
 *
 * @c: character input
 *
 * Return: 1 is c is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
