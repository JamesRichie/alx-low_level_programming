#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Function that frees dog
 * @d: Dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
