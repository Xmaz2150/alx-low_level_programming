#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
	int i,j;

	i = 0;
	j = 0;

	while (*argv[i] != '\0')
	{
		while (argv[argc - 1][j] != '\0')
		{	
			if (argv[i][j] != '\0')
			{
				_putchar(argv[i][j]);
				j++;
			}
			else
			{
				_putchar('\n');
				j = 0;
				i++;
			}
		}
	}
	*/

	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		
	return (0);
}

