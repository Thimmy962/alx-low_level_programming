#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - check description
 * Description: prints the reverse of a string
 * @s: takes a string s as input
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
										}
}

