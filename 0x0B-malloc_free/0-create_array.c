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
	
	if (size == 0)
	{
		return (0);
	}
	else
	{
		
		a = malloc(sizeof(c)*size);
	
		i = 0;	
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		free(a);
		return (a);
	}
}
