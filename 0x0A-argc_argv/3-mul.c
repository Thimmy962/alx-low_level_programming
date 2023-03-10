#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the value of two int from the cli
 * @argv: cli
 * @argc: a cli
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;i

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (int)  a * b);
	return (0);
}
