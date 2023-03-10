#include <stdio.h>
#include <stdlib.h>

/**
 * main - pronts minimum number of coins
 * @argv: cli
 * @argc: cli
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int braces = 0, cents, quaters = 0, dimes = 0,
	    nickels = 0, pennies = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents >= 25)
	{
		cents = cents - 25;
		quaters++;
	}
	while (cents >= 10)
	{
		cents = cents - 10;
		dimes++;
	}
	while (cents >= 5)
	{
		cents = cents - 5;
		nickels++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		braces++;
	}
	while (cents >= 1)
	{
		cents = cents - 1;
		pennies++;
	}
	printf("%i\n", quaters + dimes + braces + nickels + pennies);
	return (0);
}
