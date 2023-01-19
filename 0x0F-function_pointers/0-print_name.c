#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name- prints name
 * @name: name to print
 * @f: pointer to function that prints name
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
