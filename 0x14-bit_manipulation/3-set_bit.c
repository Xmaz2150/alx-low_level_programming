#include "main.h"
/**
 * set_bit - sets bit in:
 * @n: Input, num at:
 * @index: Input, index to 1
 *
 * Return: (int) bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size_int, i, j, i_match;
	char byte, bit;
	char *bytes;

	size_int = sizeof(unsigned int);
	i_match = 0;
	bytes = (char *)n;

	for (i = 0; i < size_int; i++)
	{
		byte = bytes[i];
		for (j = 0; j < 8; j++)
		{
			bit = byte & 1;
			if (i_match == index)
			{
				bit = 1;
				bytes[i] |= (1 << j);
				return (1);
			}
			byte >>= 1;
			i_match++;
		}
	}
	return (-1);
}
