#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - free dogs
 *@d: dog to free
 *Return: of type void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

