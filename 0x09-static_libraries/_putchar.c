#include "main.h"

/**
 *  *main -Entry point, print string _putchar
 *   *
 *    * Return: Always  0 (Success)
 *     */
int main(void)
{
	char *ch = "_putchar";
	
	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
