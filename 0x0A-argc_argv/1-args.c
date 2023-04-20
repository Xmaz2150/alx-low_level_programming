#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != '\0' && *argv[0] != '\0')
	{
		_putchar((argc - 1) + '0');
	}
	_putchar('\n');
	return (0);
}

