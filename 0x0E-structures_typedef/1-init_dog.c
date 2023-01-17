#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Inialize stucture dog
 * @d: pointer to dog structure
 * @name: dog's name
 * @age: do'g age
 * @owner: dog's owner
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


