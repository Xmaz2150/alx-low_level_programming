#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - modifies elements in:
 * @array: Input, with:
 * @size: Input, elements+1 by:
 * @action: Input, Function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
