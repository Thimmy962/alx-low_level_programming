#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the descriptio
 * @s: takes a string as input
 * description: prints the string in reverse order
 * Return: Noting
*/

void rev_string(char *s)
{
	int a = strlen(s), b = a - 1;

	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
