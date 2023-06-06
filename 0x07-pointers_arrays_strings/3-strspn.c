#include "main.h"
#include <string.h>
/**
 * _strspn - returns length of prefix string
 *
 * @accept: Input, in
 * @s: Input
 *
 * Return: int(unsigned)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len_s, len_a, len, si, ai;

	len = 0;
	len_s = strlen(s);
	len_a = strlen(accept);

	for (si = 0; si < len_s; si++)
	{
		unsigned int match = 0;

		for (ai = 0; ai < len_a; ai++)
		{
			if (accept[ai] == s[si])
			{
				len++;
				match = 1;
			}
		}
		if (match == 0)
			return (len);
	}
	return (len);
}
