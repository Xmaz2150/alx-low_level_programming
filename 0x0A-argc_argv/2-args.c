#include "main.h"
#include <stdio.h>

/**
 * main - prints all args
 * @argc: argument count
 * @argv: arguments
 *
 * Return: (0) Always success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

