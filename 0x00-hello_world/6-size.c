#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long));
	printf("Size of a long long int: %li byte(s)\n", (sizeof(long) * 2));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	return (0);
}

