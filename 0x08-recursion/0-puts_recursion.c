#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string with use of recursion
 * @s: Input
 * Return: none
 */
void _puts_recursion(char *s)
{
char *ptr;

	ptr = s;
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(ptr + 1);
	}
}
