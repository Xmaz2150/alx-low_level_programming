#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec, base;
	int i;
	dec = 0;

	for (len = 0; b[len]; len++)
	{
		if (!(isdigit(b[len])))
			return (0);
	}

	base = 1;
	for (i = (len - 1); i >= 0; i--)
	{
		dec += (b[i] - '0') * base;
		base *= 2;
	}

	return (dec);
}
