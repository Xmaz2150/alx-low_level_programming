#include "function_pointers.h"
/**
 * int_index - searches for an integer in:
 * @array: Input, that matches int compared in:
 * @cmp: Input.
 * @size: Input, size of array
 *
 * Return: (int)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
