#include "main.h"
/**
 * swap_int - swaps to no's:
 * @a with @b
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
