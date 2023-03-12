#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ctoi(char c);

/**
 * main - adds number from the cli
 * @argc: cli input
 * @argv: cli input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, b = argc, sum = 0, i;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < b; j++)
	{
		s = argv[j];

		for (i = 0; s[i] != '\0'; i++)
		{

			if (!isdigit(s[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(s);
	}
	printf("%d\n", sum);

	return (0);
}
