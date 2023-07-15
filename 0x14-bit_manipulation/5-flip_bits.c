#include "main.h"
#include <stdio.h>
/**
 * count_set_bit - counts 1's in:
 * @n: Input, number
 * 
 * Return: (int) 1's
 */

int count_set_bits(int n)
{
	int count;
	
	count = 0;
	while (n > 0) 
	{
		count++;
		n &= (n - 1);
	}
	return count;
}

/**
 * flip_bits - ruturns no of bits to be flipped to go from:
 * @n: Input, num1 to:
 * @m: Input, num2
 *
 * Return: (u int) no of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
