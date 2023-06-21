#include "function_pointers.h"
/**
 * print_name - prints name:
 * @name: Input, with function at:
 * @f: Input.
 *
 * Return: (void)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
