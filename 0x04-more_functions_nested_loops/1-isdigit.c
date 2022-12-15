#include "main.h"

/**
 * _isdigit -check whether a character is a digit or a number
 * @c: input character
 * Return: 1 if its a digit or 0 is a letter
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
