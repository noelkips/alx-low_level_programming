#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- print structure dog
 * @d: dog structure
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("(nil)");
		else
			printf("Name: %s\n", d->name);

		if ((*d).age < 0)
			printf("(nil)");
		else
			printf("Age: %f\n", d->age);


		if ((*d).owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
	{
		return;
	}
}


