#include "main.h"
#include <stddef.h>

/**
 * *_strchr - returns pointer to:
 *
 * @s: Input, where
 * @c: Input first occurs
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *f;

	if (!(c >= '!' && c <= '~'))
		return (NULL);
	else
	{
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
				return (NULL);
			}
		}

		return (f);
	}
}
