#include "main.h"
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
	unsigned int len_a, len, i, si, ai;

	len = 0;
	for (i = 0; ; i++)
	{
		if (accept[i] != '\0')
		{
			len_a++;
		}
		else
		{
			break;
		}
	}

	for (si = 0; s[si] != '\0'; si++)
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
