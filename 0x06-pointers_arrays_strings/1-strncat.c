#include "main.h"
/**
 * *_strncat - concatenates two strings:
 *
 * @dest: Input and :
 * @src: , based on 
 * @n: Input
 * 
 * Returns: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, len_dest, len_src;

	len_dest = 0;
	len_src = 0;
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
	for (j = 0; ; j++)
        {
                if (src[j] != '\0')
                {
                        len_src++;
                }
                else
                {
                        break;
                }
        }

	for (k = 0; k < n; k++)
	{
		*(dest + (len_dest + k)) = src[k];
		if (k < len_src)
		{
			break;
		}
	}
	
	return (dest);
}
