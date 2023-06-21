#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - performs different operations on:
 * @array: Input, of size:
 * @size: Input.
 * @action: Input, operations.
 *
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
