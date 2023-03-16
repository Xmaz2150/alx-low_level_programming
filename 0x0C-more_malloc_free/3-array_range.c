#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns pointer array init by
 * @min: Input
 * @max: Input
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr, range, i;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min;

	arr = malloc(sizeof(arr) * range);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		while (i < range + 1)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
