#include <stdio.h>
#include "main.h"

/**
 * main - prints all it cla
 * @argc: a cli input
 * @argv: a cli input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, len = argc;

	for (; i < len; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

