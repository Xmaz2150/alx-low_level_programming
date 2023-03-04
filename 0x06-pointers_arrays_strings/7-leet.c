#include "main.h"
#include <stdio.h>
/**
 * *leet - changes certain letters to no's
 *
 * @str: Input
 *
 * Return: char
 */
char *leet(char *str)
{
int i;

i = 0;
        while (str[i] != '\0')
        {
                char c = str[i];
		
		if (c == 'a' || c == 'A')
                {
			str[i] = '4';
                }
		else if (c == 'e' || c == 'E')
                {
                        str[i] = '3';
                }
		else if (c == 'o' || c == 'O')
                {
                        str[i] = '0';
                }
		else if (c == 't' || c == 'T')
                {
                        str[i] = '7';
                }
		else if (c == 'l' || c == 'L')
                {
                        str[i] = '1';
                }
                i++;
        }
        return (str);
}
