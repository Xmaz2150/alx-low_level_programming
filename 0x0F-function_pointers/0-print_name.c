#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints:
 *
 * @name: Input, with callback funtion:
 * @f: Input, Function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
