#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct:
 * @d: Input
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Owner: %s\n", d->owner);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
