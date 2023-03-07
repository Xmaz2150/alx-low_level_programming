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
	unsigned int len_s;
	unsigned int len_a;
	unsigned int len;
	unsigned int i;
	unsigned int j;
	unsigned int si;
	unsigned int ai;

	len = 0;
	for (i = 0; ; i++)
	{
		if (s[i] != '\0')
		{
			len_s++;
		}
		else
		{
			break;
		}
	}
	for (j = 0; ; j++)
        {
                if (accept[j] != '\0')
                {
                        len_a++;
                }
                else
                {
                        break;
                }

	}

	for (si = 0; i < len_s; si++)
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
