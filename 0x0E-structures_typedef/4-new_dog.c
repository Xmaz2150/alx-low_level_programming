#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new struct
 *
 * @name: Input
 * @age: Input
 * @owner: Input
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(new_d));

	if (new_d == NULL)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
