#include "main.h"

/**
 * _atoi -Convert a string into integer
 * @s: pointer to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int ch, j = 0;
	unsigned int n = 0;
	int m = 1;

	while (s[ch])
	{
		if (s[ch] == 45)
		{
			m *= -1;
		}
		while (s[ch] >= 48 && s[ch] <= 57)
		{
			j = 1;
			n = (n * 10) + (s[ch] - '0');
			ch++;
		}
		if (j == 1)
		{
			break;
		}
		ch++;
	}
	n *= m;
	return (n);
}
