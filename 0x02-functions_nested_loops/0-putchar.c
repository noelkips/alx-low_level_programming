#include "main.h"

/**
 *main -Entry point, print string _putchar
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
