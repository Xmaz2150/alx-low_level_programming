#include <stdio.h>
#include <stdlib.h>

int change(int cents);
/**
* main - prints min no of coins
* @argc: 2 arguments
* @argv: prog name, cents
*
* Return: (0) Always, success
*/
int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
{
printf("Error\n");
return (0);
}
if (!atoi(argv[1]))
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) == 0)
{
printf("0\n");
return (0);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
coins = change(cents);

printf("%d\n", coins);
return (0);
}

/**
* change - simplifies main
* @cents: Input
*
* Return: int
*/
int change(int cents)
{
int coins;
coins = 0;
while (cents >= 25)
{
cents -= 25;
coins++;
}

while (cents >= 10)
{
cents -= 10;
coins++;
}

while (cents >= 5)
{
cents -= 5;
coins++;
}
while (cents >= 2)
{
cents -= 2;
coins++;
}
if (cents == 1)
coins++;
return (coins);
}
