#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: struct
 * Return: void
 */

void free_dog(dog_t *d);
{
	free(d->name);
	free(d->owner);
	free(d);
}
