#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0 - 14x10
 *
 * Return: none
 */
void more_numbers(void)
{
	int i, j;

	int no[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 , 13, 14};

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d",no[i]);
		}
		printf("\n");
	}
}
