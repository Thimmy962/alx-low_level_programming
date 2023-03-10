#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds number from the cli
 * @argc: cli input
 * @argv: cli input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j = 1, b = argc, sum = 0, i;
	char *s;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while(j < b)
	{
		if (!isdigit(*argv[j]))
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}

	for (; j < b; j++)
	{
		s = argv[j];
		i = 0;
		
		if (argv[i] > 0)
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	
	return (0);
}

