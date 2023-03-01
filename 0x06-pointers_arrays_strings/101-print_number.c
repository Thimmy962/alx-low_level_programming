#include "main.h"

/**
 * print_number - check the decription
 * @n: takes an integer a input
 * description: prints and integer using _pitchar
 * Return:Nothing
*/

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else
	{
		n = n;
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');

}
