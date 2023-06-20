#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - free dogs
 *Return: of type void
 */

void free_dog(dog_t *d)
{
	free(d);
}

