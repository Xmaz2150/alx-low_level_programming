#include "main.h"
/**
 * *_memcpy - copies memory area from:
 *
 * @src: Input, to
 * @dest: Input by,
 * @n: Input
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
