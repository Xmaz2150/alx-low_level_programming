#include "search_algos.h"

/**
 * linear_search - searchs target value linearly
 * @array: Input, list to search
 * @size: Input, len of list
 * @value: Input, target
 *
 * Return: status(index) success, -1 failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
