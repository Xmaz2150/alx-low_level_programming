#include "function_pointers.h"

/**
 * print_name - prints:
 *
 * @name: Input, with callback funtion:
 * @f: Function
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
