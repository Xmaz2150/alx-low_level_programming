#include "main.h"

/**
 * main - prints name of the program it is compiled from
 * Return: int
 */
int main(void)
{
	char my_name[256];
	int size;

	size = sizeof(my_name);

	_strncpy(my_name, __FILE__, size);
	_puts(my_name);

	return (0);
}
