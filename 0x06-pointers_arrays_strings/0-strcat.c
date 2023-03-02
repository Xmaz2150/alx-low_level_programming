#include "main.h"
/**
 * *_strcat - concatenates  two strings together
 * @dest: Input, is appended by @src: Input
 * Returns: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = 0;
	for (i = 0; ; i++)
	{
		if (dest[i] != '\0')
		{
			len++;
		}
		else
		{
			break;
		}
	}

	for (j = 0; ; j++)
	{
		if (src[j] != '\0')
		{
			*(dest + (len + j)) = src[j];
		}
		else
		{
			*(dest + (len + j)) = src[j];
			break;
		}
	}
		return (dest);
}
