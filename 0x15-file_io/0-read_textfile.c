#include "main.h"

/**
 * read_textfile - reads chars in
 * @filename: Input, name of file
 * @letters: Input, num of chars to be read
 *
 * Return: no of chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t i;
	int c;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	for (i = 0; (c = fgetc(fp)) != EOF && i < (ssize_t)letters; i++)
		putchar(c);

	fclose(fp);

	return (i);
}
