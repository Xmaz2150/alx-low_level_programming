#include "main.h"
/**
 * *_strcpy - copies str
 *
 * @dest: Input and:
 * @src: Input
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0;; i++)
	{
		if (src[i] != '\0')
		{
			*(dest + i) = src[i];
		}
		else
		{
			*(dest + i) = src[i];
			break;
		}
	}
	return (dest);
}
