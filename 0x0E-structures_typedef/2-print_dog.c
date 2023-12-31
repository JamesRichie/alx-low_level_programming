#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the struct dog
 * @d: dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = ")nil)";
	if (d->name == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
