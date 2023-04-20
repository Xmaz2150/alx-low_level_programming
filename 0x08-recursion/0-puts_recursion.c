#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string with use of recursion
 * @s: Input
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		/**
		 *_putchar('%c', *s);
		 */
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
