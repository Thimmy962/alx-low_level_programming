#include "main.h"
#include <string.h>

/*
 * _print_rev_recursion - check description
 * @s: takes a sting input
 * descriotion: a the reverse version of a string
 * Return: Mothing
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s), i = len - 1;

	for (; i >= 0; i--)
		_putchar(s[i]);
}

