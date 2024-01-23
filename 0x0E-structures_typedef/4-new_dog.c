#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return;
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return;
	new_dog->name = strup(name);
	new_dog->owner = strup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		return;
	}
	new_dog->age = age;
	return (new_dog);
}

