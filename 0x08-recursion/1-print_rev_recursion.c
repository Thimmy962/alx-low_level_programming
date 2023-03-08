#include "main.h"
#include <string.h>

/*
 * _print_rev_recursion - check description
 * @s: takes a sting input
 * description: a the reverse version of a string
 * Return: Mothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
										}
}

