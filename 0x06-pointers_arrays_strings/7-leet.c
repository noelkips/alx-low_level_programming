#include "main.h"

/**
 * leet -enconde string into 1337
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;

	char code[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0; code[j][0] != '\0'; j++)
		{
			if (s[i] == code[j][0])
				s[i] = code[j][1];
		}
		j = 0;
	}
	return (s);
}
