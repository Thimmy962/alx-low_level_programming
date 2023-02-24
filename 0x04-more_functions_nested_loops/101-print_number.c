#include "main.h"

/**
 * print_number - check the description
 * @n: function takes an input called n
 * description: it print the number given to it.
 * Return: Nothing.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
