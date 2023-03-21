#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - frees struct
 * @d: Input
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
