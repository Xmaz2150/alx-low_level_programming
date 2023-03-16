#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of:
 * @b: Input bytes
 *
 * Return: none
 */
 void *malloc_checked(unsigned int b)
{
	char *a;

	a  = (char *) malloc(sizeof(a) * b);

	if (a == NULL)
	{
		exit (98);
	}
	else
	{

		return (a);
	}
}
