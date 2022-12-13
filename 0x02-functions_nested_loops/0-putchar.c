#include "main.h"

/**
 *main -Entry point, print string _putchar
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	int i = 0;
	char ch[] = "_putchar";

	while (i <= 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
