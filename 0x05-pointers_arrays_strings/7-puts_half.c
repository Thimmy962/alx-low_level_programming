#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the descriptio
 * @str: takes a string as input
 * description: prints the secod of a string
 * Return: Nothing
*/

void puts_half(char *str)
{
	int a = strlen(str) / 2, b = strlen(str);

	if (b % 2 == 0)
	{
		for (; a < b; a++)
		{
		_putchar(str[a]);
		}
	}
	else
	{
		for (a = a + 1; a < b; a++)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
