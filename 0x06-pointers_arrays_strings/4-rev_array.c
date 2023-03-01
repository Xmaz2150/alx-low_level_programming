#include "main.h"
/**
 * reverse-array - reverse elements of array:
 *
 * @a: Input
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{	
	int i, new_n;
	int tmp[13];
	
	new_n = n -1;
	for (i = 0; i  < n; i++)
	{
		*(tmp + i) = a[new_n - i];
	}

	*a = *tmp;
}
