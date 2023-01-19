#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name- prints name
 * @name: name to print
 * @f: pointer to function that prints name
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
