#include "main.h"
/**
 ** _memset - sets buffer with contstant byte :
 *
 * @b: Input, to
 * @s: Input until,
 * @n: Input times
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
