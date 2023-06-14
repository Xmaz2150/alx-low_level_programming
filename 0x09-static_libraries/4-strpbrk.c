#include "main.h"
/**
 * *_strpbrk - returns pointer of similar prefix
 * @s: Input
 * @accept: Input
 * Return:char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *f;

	for (i = 0; ; i++)
	{
		if (s[i] != '\0')
		{
			if (s[i] == accept[0])
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
