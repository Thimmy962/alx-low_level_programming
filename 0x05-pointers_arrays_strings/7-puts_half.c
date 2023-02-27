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
	int a = strlen(str) / 2;

	for (; a < strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
