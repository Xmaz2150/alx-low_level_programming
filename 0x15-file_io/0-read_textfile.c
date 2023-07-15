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
	char *buf;
	size_t n, i;

	buf = malloc(letters);

	if (buf == NULL)
		return (0);

	my_file = fopen(filename, "r");
	if (my_file == NULL)
		return (0);

	n = fread(buf, sizeof(char), letters,  my_file);

	for (i = 0; i <= n; i++)
		putchar(buf[i]);

	fclose(my_file);

	return (n);
}
