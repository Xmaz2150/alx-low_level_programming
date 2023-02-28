#include "main.h"

void print_rev(char *s)
{
	int len, i, j;

	len = 0;

	for (i = 0;;i++)
	{
		if (s[i] != '\0')
		{
			len++;
		}
		else
		{
			break;
		}
	}

<<<<<<< HEAD
	for (j = 0; j < len +1; j++)
=======
	for (j = 1; j < len; j++)
>>>>>>> b018c6bfd0ee5d5c006d2d1b4264a0fc8a6e4478
	{
		_putchar(s[len - j]);
	}
	_putchar('\n');
}	
