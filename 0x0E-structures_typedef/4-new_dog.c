#include "dog.h"
#include <stdlib.h>
#include "strlen.c"
#include "strcpy.c"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (!(name == NULL || age < 0 || owner == NULL))
	{

		ptr= malloc(sizeof(dog_t));
		if (ptr == NULL)
			return (NULL);

		ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (ptr->name == NULL)
		{
			free(ptr);
			return (NULL);
		}

		ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (ptr->owner == NULL)
		{
			free(ptr->name);
			free(ptr);
			return (NULL);
		}

		ptr->name = _strcpy(ptr->name, name);
		ptr->age = age;
		ptr->owner = _strcpy(ptr->owner, owner);

		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
