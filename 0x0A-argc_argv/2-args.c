#include "main.h"

/**
 * main - prints all it cla
 * @argc: a cli input
 * @argv: a cli input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, len = argc, j;
	char *s;

	for (; i < len; i++)
	{
		s = argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			_putchar(s[j]);
			j++;
		}
		_putchar('\n');
	}
	return (0);
}

