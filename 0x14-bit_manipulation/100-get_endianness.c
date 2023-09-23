/**
 * get_endianness - gets endianness of machine
 *
 * Return: endian st
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
