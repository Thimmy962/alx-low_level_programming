#include "main.h"

/**
 * main - prints its name
 * @argc: command line argument
 * @argv: command line argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 0;
	char *s = argv[0];

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

