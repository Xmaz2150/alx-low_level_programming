#include "function_pointers.h"

/**
 * int_index - returns index of array:
 * @array: Input, of lenght:
 * @size: Input +1, where index satisfies the condition in:
 * @cmp: Input Function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if(cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
