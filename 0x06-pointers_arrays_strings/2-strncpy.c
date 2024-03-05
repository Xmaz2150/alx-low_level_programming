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
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; src[k] != '\0'; k++)
		;

	for (j = 0; j < n; j++)
	{
		if (j <= k)
			*(dest + j) = src[j];
		else
			*(dest + j) = '\0';
	}
	return (dest);
}
