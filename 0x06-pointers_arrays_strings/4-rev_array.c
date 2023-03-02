#include "main.h"
/**
 * reverse_array - reverse elements of array
 *
 * @a: Input , with use of:
 * @n: Input
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i  < (n / 2); i++)
	{
		tmp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
