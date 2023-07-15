#include "main.h"
#include <string.h>

/**
 * create_file - creates file:
 * @filename: Input, name of file. With:
 * @text_content: Input, file contents.
 *
 * Return: (int) 1 Success
 */

int create_file(const char *filename, char *text_content)
{
	FILE *my_file;

	if (filename == NULL)
		return (-1);

	my_file = fopen(filename, "w");

	if (my_file == NULL)
		return (-1);

	if (text_content != NULL)
		fwrite(text_content, sizeof(char), strlen(text_content), my_file);

	fclose(my_file);

	return (1);
}
