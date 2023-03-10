#include "main.h"

/**
 * main - prints all it cla
 * @argc: a cli input
 * @argv: a cli input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, len = argc, j = 0;
	char *s;

	for (; i < len; i++)
	{
		s = argv[i];

		while (s[j] != '\0')
		{
			_putchar(s[j] + '0');
			j++;
		}
		_putchar('\n');
	}
	return (0);
}

