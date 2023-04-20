#include "main.h"
#include <stdlib.h>

/**
 * _calloc - returns pointer to array
 *
 * @nmemb: Input
 * @size: Input
 * Return: none
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}

	arr = calloc(nmemb, size);

	return (arr);
}
