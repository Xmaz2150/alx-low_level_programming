#include "main.h"

/**
 * create_file - creates file:
 * @filename: Input, name of file
 * @text_content: Input, file content
 *
 * Return: 1 success
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "w");
	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
		fprintf(fp, "%s", text_content);

	fclose(fp);

	return (1);
}
