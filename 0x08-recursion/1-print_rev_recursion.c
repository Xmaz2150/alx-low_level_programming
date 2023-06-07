#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion- prints stringin reverse with the use of recursion
 *
 * @s: Input
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
