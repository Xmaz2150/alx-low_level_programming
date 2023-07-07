#include "main.h"
/**
 * get_bit - gets bit in:
 * @n: Input, num at:
 * @index: Input, index
 *
 * Return: (int) bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num, size_int, i, j, i_match;
	char byte, bit;

	num = n;
	size_int = sizeof(int);
	i_match = 0;

	for (i = 0; i < size_int; i++)
	{
		byte = *(((char *)&num) + i);
		for (j = 0; j < 8; j++)
		{
			bit = byte & 1;
			if (i_match == index)
				return ((unsigned int)bit);
			byte >>= 1;
			i_match++;
		}
	}
	return (-1);
}
