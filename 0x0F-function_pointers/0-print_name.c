#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name_func- prints name
 * @name: name to print
 * Return: none
 */

void print_name_func(char *name)
{
	printf("%s", name);
}

/**
 * print_name- prints name
 * @name: name to print
 * @f: pointer to function that prints name
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
