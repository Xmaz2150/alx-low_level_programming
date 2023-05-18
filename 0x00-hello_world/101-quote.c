#include <string.h>
#include <unistd.h>

/*
 * main - Etry point
 *
 * Return: Alwasy 1 (Success)
 */

int main(void)
{
	const char *s;

	s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, s, strlen(s));

	return (1);
}

