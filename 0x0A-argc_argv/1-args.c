#include "main.h"
/**
 * main - prints no of args
 * @argc: argument count
 * @argv: arguments
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	if (argc != '\0' && *argv[0] != '\0')
	{
		_putchar((argc - 1) + '0');
	}
	_putchar('\n');
	return (0);
}

