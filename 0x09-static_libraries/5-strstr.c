#include "main.h"
/**
 * *_strstr - returns pointer where prefix matches
 * @haystack: Input
 * @needle: Input
 * Return:char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	for (i = 0; ; i++)
	{
		if (haystack[i] != '\0')
		{
			if (haystack[i] == needle[0])
			{
				p = &haystack[i];
				break;
			}
		}
		else
		{
			break;
		}
	}
	return (p);
}
