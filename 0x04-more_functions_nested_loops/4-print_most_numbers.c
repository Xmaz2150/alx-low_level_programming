#include "main.h"
/**
 * print_most_numbers - prints mmost no's?
 *
 * Return: none
 */
void print_most_numbers(void)
{
int i;

for (i = 48 ; i <= 57; i++)
{	
if (i == 50 || i == 52)
{
continue;
}	
_putchar(i);
}
_putchar('\n');
}
