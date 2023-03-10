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
			if (isdigit(s[i]) && ctoi(s[i]) > 0)
			{
				sum = sum + atoi(s);
			}
			else if (!isdigit(s[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * ctoi - converts a char to int
 * @c: takes a char as input
 * Return: 0;
 */

int ctoi(char c)
{	int j;

	switch (c)
	{
		case '0':
			j = 0;
			break;
		case '1':
			j = 1;
			break;
		case '2':
			j = 2;
			break;
		case '3':
			j = 3;
			break;
		case '4':
			j = 4;
			break;
		case '5':
			j = 5;
			break;
		case '6':
			j = 6;
			break;
		case '7':
			j = 7;
			break;
		case '8':
			j = 8;
			break;
		case '9':
			j = 9;
			break;
	}
	return (j);
}
