#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes :
 *
 * @d: Input, with:
 * @name: Input,
 * @age: Input and
 * @owner: Input
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
