#include "main.h"
/**
 * *_strncpy - copies or overwrites :
 *
 * @dest: Input, with:
 * @src : Input by:
 * @n : Input char(s)
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
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

	for (j = 0; j < n; j++)
	{
		*(dest + j) = src[j];
	}
	return (dest);
}
