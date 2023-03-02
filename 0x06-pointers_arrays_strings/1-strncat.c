#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings:
 *
 * @dest: Input and :
 * @src: based on
 * @n: Input
 *
 * Returns: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k, len_dest;

	len_dest = 0;
	for (i = 0; ; i++)
	{
		if (dest[i] != '\0')
		{
			len_dest++;
		}
		else
		{
			break;
		}
	}
	for (k = 0; k < n; k++)
	{
		if (src[k] != '\0')
		{
			*(dest + (len_dest + k)) = src[k];
		}
		else
		{
			break;
		}
	}
	return (dest);
}
