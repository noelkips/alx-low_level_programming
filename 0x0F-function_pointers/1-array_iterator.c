#include "function_pointers.h"


/**
 * array_iterator - executes a function given as
 * parameter on each element of array
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to function
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action !=	NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}
