#include "main.h"

/**
 * read_textfile - reads txt:
 * @filename: Input, name to POSIX stdo
 * @letters: Input, no letters to be printed
 *
 * Return: (int) no of letters managed to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *my_file;
	int i, lett;
	int c;	

	my_file = fopen(filename, "r");
	if (my_file == NULL)
		return (0);
	i = 0;
	lett = letters;
	(void)lett;

	while ((c = fgetc(my_file)) != EOF)
	{
		putchar(c);
		i++;
	}

	fclose(my_file);

	return (i);
}
