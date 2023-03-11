#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

	int i;
	char error[] = "Error";


	if (argc != 3)
	{

		i = 0;
		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}

		_putchar('\n');
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

