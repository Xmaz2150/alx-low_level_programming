#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros;
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    printf("%ld, mask: %ld\n", n, mask);
    leading_zeros = 1;

    while (mask)
    {
        if (n & mask)
        {
            _putchar('1');
            leading_zeros = 0;
        }
        else if (!leading_zeros)
        {
            _putchar('0');
        }

        mask >>= 1;
    }
   _putchar('\n');
}

