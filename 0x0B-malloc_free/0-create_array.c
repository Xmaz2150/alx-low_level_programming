#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of size:
 * @size: Input and initializes witch char,
 * @c: Input
 *
 * Return: char(pointer)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(c)*size);
	i = 0;

	for (i = 0; ; i++)
	{
		if (i < (size - 1))
		{
			a[i] = c;
		}
		else if(i == (size - 1))
		{
			a[i] = '\0';
			break;
		}
	}
	free(a);
	return (a);
}
