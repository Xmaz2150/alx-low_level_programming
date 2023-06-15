#include "main.h"
#include <stdlib.h>

void 
/**
 * **alloc_grid - returns a pointer to a 2d array of ints of:
 * @width: Input width and
 * @height: Input height
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = (int **) malloc(sizeof(int *) * height);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{

			i = 0;
			j = 0;
			k = 0;

			for ( ; i < height; i++)
			{
				arr[i] = (int *) malloc(sizeof(int) * width);	
				if (arr[i] == NULL)
				{
					free_grid(arr, i);
					return (NULL);
				}
			}

			for (; j < height; j++)
			{
				for ( ; k < width; k++)
				{
					arr[j][k] = 0;
				}
			}
		}
	}
	return (arr);
}
