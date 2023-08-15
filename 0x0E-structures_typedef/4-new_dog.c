#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Fuction that creates a new dog
 * @name: Name of dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x;
	int new_name = 0;
	int new_owner = 0;

	while (name[new_name])
		new_name++;
	while (owner[new_owner])
		new_owner++;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (new_name + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
	{
		dog->name[x] = name[x];
	}
	dog->name[x] = '\0';

	dog->owner = malloc(sizeof(char) * (new_owner + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; owner[x] != '\0'; x++)
	{
		dog->owner[x] = owner[x];
	}
	dog->owner = '\0';
	dog->age = age;
	return (dog);
}
