	#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the descriptio
 * @s: takes a string as input
 * description: prints the string in reverse order
 * Return: Noting
*/

void print_rev(char *s)
{
	int a = strlen(s), b = a - 1;

	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
