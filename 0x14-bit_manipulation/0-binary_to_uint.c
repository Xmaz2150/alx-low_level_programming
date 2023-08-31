#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - base 2 to base 10
 *
 * @b: Input, base 2
 *
 * Return: uint base 10
 */

unsigned int binary_to_uint(const char *b)
{
	size_t result, bin_pos, i;
	int j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	result = 0;
	bin_pos = 1;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			result += bin_pos;
		bin_pos *= 2;
	}

	return (result);
}
