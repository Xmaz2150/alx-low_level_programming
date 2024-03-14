#include "main.h"
#include <stdio.h>

char leet_it(leet_t *arr, char c);

/**
 * leet - changes certain letters to no's
 *
 * @str: Input
 *
 * Return: char
 */
char *leet(char *str)
{
	int i;

	leet_t arr[] = {
		{"Aa", '4'},
		{"Ee", '3'},
		{"Oo", '0'},
		{"Tt", '7'},
		{"Ll", '1'},
		{"", '\0'}
	};

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = leet_it(arr, str[i]);
		i++;
	}
	return (str);
}

/**
 * leet_it - leet helper
 * @arr: Input, leet struct arr
 * @c: Input, char to leet
 *
 * Return: leet_c or default char
 */
char leet_it(leet_t *arr, char c)
{
	char leet_c1, leet_c2;
	int i = 0;

	while (arr[i].leet != '\0')
	{
		leet_c1 = arr[i].leet_chars[0];
		leet_c2 = arr[i].leet_chars[1];
		if (c == leet_c1 || c == leet_c2)
			return (arr[i].leet);
		i++;
	}
	return (c);
}
