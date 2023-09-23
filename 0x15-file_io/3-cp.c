#include "main.h"
/**
 * main - copies the content of a file 1 to file 2
 * @ac: Input, number of arguments
 * @av: Input, arguments
 * Return: status
 */
int main(int ac, char **av)
{
	int st_1, st_2, read_counter, write_counter, fd, fd2;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((read_counter = read(fd, buffer, BUFSIZ)) > 0)
	{
		write_counter = (write(fd2, buffer, read_counter));
		if (write_counter != read_counter)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (read_counter == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	st_1 = close(fd);
	if (st_1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	st_2 = close(fd2);
	if (st_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
