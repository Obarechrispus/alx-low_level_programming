#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - entry
 *@d: the variable that points to char
 *
 *
 *Return: null
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
