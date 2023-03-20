#include "main.h"

/**
 * main - prints name of the program it is compiled from
 * Return: int
 */
int main(void)
{
	char filename[256];
	int size;

	size = sizeof(filename);

	_strncpy(filename, __FILE__, size);
	_puts(filename);

	return (0);
}
