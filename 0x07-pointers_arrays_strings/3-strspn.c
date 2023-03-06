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
	unsigned int len;

	while (*s && *_strchr(accept, *s++))
		len++;
	return (len);
}

char *_strchr(char *s, char c)
{
	int i;
	char *f;

	for (i = 0; ; i++)
	{
		if (s[i] != '\0')
		{
			if (s[i] == c)
			{
				f = &s[i];
				break;
			}
		}
		else
		{
			break;
		}
	}
	return (f);
}
